#ifndef HUFFMAN_H
#define HUFFMAN_H

#include<iostream>
#include<vector>
#include<string>
#include <fstream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;
struct node
{
     node * leftChild;
     node * rightChild;
     double frequency;
     string content;
     string code;
};

struct files
{
    char c;
    int freq;
};

class Huffman{
public:
    void getHuffmanCode();
    void BFS(node *temproot, string s,string b);
    void BFS(node *temproot, string s);
    void file();
    void filewritebin();
    void fileRead();
    int convertBin(string s);

private:
    node extractMin();
    node getHuffmanTree();
    vector<node> nodeArray;
    vector<files> fileV;
    vector<string> bin;
    vector<int> num;

    int reverseInt(int num);
    string numb2str(int num);
    int str2num(string s);
    string bitShortManage(int sbin);
    int bin2dec(int n);
    int dec2bin(int n);
    bool found;
};

#endif // HUFFMAN_H
