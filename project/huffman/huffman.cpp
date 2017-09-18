#ifndef HUFFMAN_CPP
#define HUFFMAN_CPP
#include "huffman.h"
//vector<string> bin;

node Huffman::extractMin()
{
     double temp=(double) INT_MAX;
     vector<node>::iterator i1,pos;
     for(i1 = nodeArray.begin();i1!=nodeArray.end();i1++)
     {
          if(temp>(*i1).frequency)
          {
                pos = i1;
                temp = (*i1).frequency;
          }
     }
     node tempNode = (*pos);
     nodeArray.erase(pos);

     return tempNode;
}



node Huffman::getHuffmanTree()
{
    while(!nodeArray.empty())
    {
        node * tempNode = new node;
        node * tempNode1 = new node;
        node * tempNode2 = new node;
        *tempNode1 = extractMin();
        *tempNode2 = extractMin();


        tempNode->leftChild = tempNode1;
        tempNode->rightChild = tempNode2;
        tempNode->frequency = tempNode1->frequency+tempNode2->frequency;
        nodeArray.push_back(*tempNode);
        if(nodeArray.size() == 1)//only the root node exsits
        {
           break;
        }
    }
    return nodeArray[0];
}


void Huffman:: BFS(node * temproot,string s)
{
       node * root1 = new node;
       root1 = temproot;

       root1->code = s;
       if(root1 == NULL)
       {

       }
       else if(root1->leftChild == NULL && root1->rightChild == NULL)
       {

            cout<<"the content is "<<root1->content<<endl;
            cout<<"and its corresponding code is "<<root1->code<<endl;
       }
       else
       {
            BFS(root1->leftChild,s.append("0"));
            s.erase(s.end()-1);
            BFS(root1->rightChild,s.append("1"));
            s.erase(s.end()-1);
        }

}


void Huffman:: BFS(node * temproot,string s,string a)
{
       node * root1 = new node;
       root1 = temproot;
       found=false;
       //string a;

       root1->code = s;
       if(root1 == NULL)
       {

       }
       else if(root1->leftChild == NULL && root1->rightChild == NULL)
       {
           if(root1->content== a){
            bin.push_back(root1->code);

            root1=NULL;
            found=true;

           }

       }
       else if(!found)
       {
            BFS(root1->leftChild,s.append("0"),a);
            s.erase(s.end()-1);
            BFS(root1->rightChild,s.append("1"),a);
            s.erase(s.end()-1);
        }

}




void Huffman:: getHuffmanCode()
{
     int size,i;
     double tempDouble;
     string tempString = "";
     size=fileV.size();

     for(i = 0;i<size;i++)
     {
          //cout<<"please input the things you want to encoded and their frequencies!"<<endl;
          node tempNode;
          files tempndfile;
          tempndfile=fileV[i];
          //fileV.pop_back();

          tempString=tempndfile.c;
          //cout<<tempString<<endl;
          tempDouble=tempndfile.freq;
          //cout<<tempDouble<<endl;


          tempNode.frequency = tempDouble;
          tempNode.content = tempString;
          tempNode.leftChild = NULL;
          tempNode.rightChild = NULL;
          nodeArray.push_back(tempNode);
     }


    node root = getHuffmanTree();

    //string s="I";
    BFS(&root,"");
    //BFS(&root,"","I");



//READING FROM FILE
    string line;
    string s;
    ifstream myfile ("m.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            //cout << line << '\n';
            s=line;
            for(int i=0;i<s.size();i++)
            {
                char c=s[i];
                //cout<<c<<endl;

                string h(&c);
                h.erase (h.begin()+1, h.end());
                BFS(&root,"",h);
                //cout<<h<<endl;
                h.clear();
            }

        }
        myfile.close();
    }

    else cout << "Unable to open file";



}




void Huffman:: file()
{
   int freq[128];     // frequencies of letters
   ifstream inFile;   // input file
   char ch;
    files tempnode;
   inFile.open("m.txt");
   if (!inFile)
   {
      cout << "The input file could not be opened."<<endl;

   }


   for (int k = 0; k < 128; k++)
   {
      freq[k] = 0;
   }

   // Read the file, keeping track of frequency with which each letter occurs
   ch = inFile.get();
   while (ch != EOF)
   {
      //cout << ch;
      ch = toupper(ch);
      freq[ch]++;
      ch = inFile.get();
   }
   // Print the output table
  //cout << endl << "Letter frequencies in this file are as follows." << endl;
  for (char ch = 97; ch <= 122; ch++)
  {
      tempnode.c=ch;
      tempnode.freq=freq[ch];
      fileV.push_back(tempnode);
      //cout << ch << " : " << freq[ch] << endl;

  }
//  return 0;
}


void Huffman::filewritebin()
{
    string k;
    string str;
    unsigned char o;
    FILE *fh = fopen ("file.txt", "w");
    for(int i=0;i<bin.size();i++)
    {
        k=bin[i];
        if (fh != NULL)
        {
            for(int j=0;j<k.length();j++)
            {
                char a=k[j];  //string to char
                if(str.length()==8)
                {
                    o=bin2dec(str2num(str));
                    fwrite (&o, sizeof(o), 1, fh);
                    str.clear();
                }
                else if(str.length()<=8)
                {
                    str=str+a;
                }

            }
        }
    }
    fclose (fh);
}

/*
    int x=0;
    fh = fopen ("file.bin", "r+b");
    if (fh != NULL) {
        fread (&x,sizeof(x), 1, fh);
        cout<<"test x::"<<x<<endl;
        fclose (fh);
    }
    */


int Huffman::reverseInt(int num)
{
    int new_num = 0;
    while(num > 0)
    {
            new_num = new_num*10 + (num % 10);
            num = num/10;
    }
    return new_num;
}



string Huffman::numb2str(int num)
{
    int temp;
    num=reverseInt(num);
    string str="";
    while(num!=0)
    {
        temp=num%10;
        num/=10;
        char c=temp+'0';
        str=str+c;
    }
    return str;

}

int Huffman::str2num(string s)
{
    int k=0;
    for(int i=0;i<s.length();i++)
    {
        char a=s[i];
        int n=a-'0';
        k=k*10+n;
    }
    return k;
}

string Huffman:: bitShortManage(int sbin)
{
    int temp;
    string fullBin;
    temp=sbin;
    int counter=0;
    while(temp!=0)
    {

        temp/=10;
        counter++;
    }
    if(counter==8)
    {
        return numb2str(sbin);
    }else
    {
        for(int i=counter; i<8;i++)
        {
            fullBin=fullBin+'0';
        }
        fullBin.append(numb2str(sbin));
        return fullBin;

    }

}

int Huffman:: bin2dec(int n)
{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}

int Huffman::dec2bin(int n)
{
    int rem, i=1, binary=0;
    while (n!=0)
    {
        rem=n%2;
        n/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}

#endif // HUFFMAN_CPP
