#ifndef BST_H
#define BST_H
#include<cstdlib>
#include <iostream>
using namespace std;
template <class ItemType>
class TreeNode
{

public:
    ItemType priority;
    ItemType element;
    TreeNode *left;
    TreeNode *right;

};

template <class ItemType>
class BST
{

public:
    BST();
    bool isEmpty();
    void insert(ItemType);
    void remove(ItemType);
    bool find(ItemType);
    void printInOrder();
    void printPreOrder();
    void printPostOrder();
    void Remove(ItemType);



private:
    void Delete(ItemType ,TreeNode<ItemType>* &root);
    TreeNode<ItemType> *Insert(ItemType item, TreeNode<ItemType>* root);
    TreeNode<ItemType> *root;
    TreeNode<ItemType> *LL_Rotate(TreeNode<ItemType>* k2);
    TreeNode<ItemType> *RR_Rotate(TreeNode<ItemType>* k2);

    bool find(TreeNode<ItemType> *n,ItemType);
    void printInOrder(TreeNode <ItemType> *n);
    void printPreOrder(TreeNode <ItemType> *n);
    void printPostOrder(TreeNode <ItemType> *n);

};
#include "bst.cpp"
#endif // BST_H_INCLUDED







