#ifndef BST_CPP_INCLUDED
#define BST_CPP_INCLUDED
#include"BST.h"
#include<iostream>
using namespace std;

template<class ItemType>
BST<ItemType>::BST()
{
    root = NULL;
}

template<class ItemType>
bool BST<ItemType>::isEmpty()
{
    return(root == NULL);
}
template<class ItemType>
void BST<ItemType>::insert(ItemType item)
{
    root = insert(root, item);
}
template<class ItemType>
TreeNode<ItemType> *BST<ItemType>:: insert(TreeNode<ItemType> *n, ItemType item)
{
    if(n == NULL)
    {
        TreeNode<ItemType> *t = new TreeNode<ItemType>;
        t->element = item;
        t->left = NULL;
        t->right = NULL;
        n = t;
        return n;
    }
    if(item < n->element)
    {
        n -> left = insert(n->left, item);
        return n;
    }
    else
    {
        n->right = insert(n->right, item);
        return n;
    }
}

template<class ItemType>
bool BST<ItemType>::find(ItemType item)
{
    return find(root, item);
}
template<class ItemType>
bool BST<ItemType>:: find(TreeNode<ItemType> *n, ItemType item)
{
    if(n == NULL)
        return false;
    else if(item == n->element)
        return true;
    else if(item > n-> element)
        return find(n->right, item);
    else
        return find(n->left, item);
}

template<class ItemType>
void BST<ItemType>::printInOrder()
{
    printInOrder(root);
}
template<class ItemType>
void BST<ItemType>::printInOrder(TreeNode<ItemType>*n)
{
    if(n==NULL)
        return;
    printInOrder(n->left);
    cout << n-> element << " ";
    printInOrder(n->right);
}
template<class ItemType>
void BST<ItemType>::printPreOrder()
{
    printPreOrder(root);
}
template<class ItemType>
void BST<ItemType>::printPreOrder(TreeNode<ItemType>*n)
{
    if(n==NULL)
        return;
    cout << n-> element << " ";
    printPreOrder(n->left);
    printPreOrder(n->right);
}

template<class ItemType>
void BST<ItemType>::printPostOrder()
{
    printPostOrder(root);
}
template<class ItemType>
void BST<ItemType>::printPostOrder(TreeNode<ItemType>*n)
{
    if(n==NULL)
        return;

    printPostOrder(n->left);
    printPostOrder(n->right);
    cout << n-> element << " ";

}
template<class ItemType>
int BST<ItemType>::numLeaves()
{
    return numLeaves(root);
}
template<class ItemType>
int BST<ItemType>::numLeaves(TreeNode<ItemType> *t)
{
    if(t==NULL )
        return 0;
    else if((t->left==NULL)&&(t->right==NULL) )
        return 1;
    else
        return numLeaves(t->left)+numLeaves(t->right);
}

template<class ItemType>
int BST<ItemType>::findMin()
{
    return findMin(root);
}
template<class ItemType>
int BST<ItemType>::findMin(TreeNode<ItemType> *t)
{
    if(t->left==NULL)
        return t->element;
    else
        return findMin(t->left);
}
#endif // BST_CPP_INCLUDED
