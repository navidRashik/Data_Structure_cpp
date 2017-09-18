#ifndef BST_CPP
#define BST_CPP
#include "bst.h"
#include <iostream>
using namespace std;

template<class ItemType>
BST<ItemType> :: BST()
{

    root=NULL;

}

template<class ItemType>
bool BST<ItemType> :: isEmpty()
{

    return (root==NULL);
}

template <class ItemType>
void BST<ItemType> :: insert(ItemType item)
{
   root=Insert(item,root);
}

template<class ItemType>
TreeNode<ItemType>* BST<ItemType>:: Insert(ItemType item, TreeNode<ItemType>* root)
{
	TreeNode<ItemType>* p_node = new TreeNode<ItemType>;
	p_node->left=p_node->right=NULL;
	p_node->element=item;
	p_node->priority=rand();
	if(root==NULL)
		return (root = p_node);
	if(item <= root->element)
	{
		root->left = Insert(item, root->left);
		if(root->left->priority < root->priority)
            root = RR_Rotate(root);


	}

	else
	{
		root->right = Insert(item, root->right);
		if(root->right->priority < root->priority)
        root = LL_Rotate(root);
    }
    return root;
}


template<class ItemType>
TreeNode<ItemType>* BST<ItemType>:: RR_Rotate(TreeNode<ItemType>* k2)
{
    TreeNode<ItemType>* k1 = k2->left;
	k2->left = k1->right;
	k1->right = k2;
    return k1;
}
template<class ItemType>
 TreeNode<ItemType>* BST<ItemType>::LL_Rotate(TreeNode<ItemType>* k2)
{
	TreeNode<ItemType>* k1 = k2->right;
	k2->right = k1->left;
	k1->left = k2;
	return k1;
}
template<class ItemType>
void BST<ItemType>::Remove(ItemType item)
{
    Delete(item,root);
}
template<class ItemType>
void BST<ItemType>::Delete(ItemType item ,TreeNode<ItemType>* &root)
{
	if(root==NULL)
	{
		cout<<"treap is  empty, delete failed!\n";
		return;
	}
	if(item< root->element)
		Delete(item, root->left);
	else if(item > root->element)
		Delete(item, root->right);
	else
	{
		if(!root->left || !root->right)
		{
			TreeNode<ItemType>* temp = root;
			if(!root->left)
				{
				    root = root->right;
				}
			else{
				root = root->left;
                }
			delete temp;
        }
		else
		{
			if(root->left->priority < root->right->priority)
			{
				root = RR_Rotate(root);
				Delete(item, root->right);
			}
			else
			{
				root = LL_Rotate(root);
				Delete(item, root->left);
			}
		}
	}
}




template <class ItemType>
bool BST<ItemType>:: find(ItemType item)
{
    return find(root,item);


}



template <class ItemType>
bool BST <ItemType>::find(TreeNode<ItemType> *n, ItemType item)
{

    if (n==NULL)
        return false;
    if(item==n->element)
        return true;
    if(item>n->element)
        return find(n->right,item);
    else
        return find (n->left, item);

}


template <class ItemType>
void BST<ItemType> ::printInOrder()
{
    printInOrder(root);
}

template <class ItemType>
void BST<ItemType> :: printInOrder(TreeNode<ItemType>*n)
{

    if(n==NULL)
        return;
    printInOrder(n->left);
    cout<<n->element<<" ";
    printInOrder(n->right);
}



template <class ItemType>
void BST<ItemType> ::printPreOrder()
{
    printPreOrder(root);
}

template <class ItemType>
void BST<ItemType> :: printPreOrder(TreeNode<ItemType>*n)
{

    if(n==NULL)
        return;
    cout<<n->element<<" ";
    printPreOrder(n->left);

    printPreOrder(n->right);
}



template <class ItemType>
void BST<ItemType> ::printPostOrder()
{
    printPostOrder(root);
}

template <class ItemType>
void BST<ItemType> :: printPostOrder(TreeNode<ItemType>*n)
{

    if(n==NULL)
        return;

    printPostOrder(n->left);

    printPostOrder(n->right);
    cout<<n->element<<" ";
}


#endif // BST_CPP
