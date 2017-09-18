#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED
#include<iostream>
using namespace std;

template<class ItemType>
class TreeNode
{
public:
    ItemType element;
    TreeNode *left;
    TreeNode *right;
};
template<class ItemType>
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
    int numLeaves();
    int findMin();
private:
    TreeNode<ItemType> *root;
    TreeNode<ItemType> *insert(TreeNode<ItemType> *n, ItemType);
    TreeNode<ItemType> *remove(TreeNode<ItemType> *n, ItemType);
    bool find(TreeNode<ItemType> *n, ItemType);
    void printInOrder(TreeNode<ItemType> *n);
    void printPreOrder(TreeNode<ItemType> *n);
    void printPostOrder(TreeNode<ItemType> *n);
    int numLeaves(TreeNode<ItemType> *t);
    int findMin(TreeNode<ItemType> *t);
};
#include"BST.cpp"
#endif // BST_H_INCLUDED
