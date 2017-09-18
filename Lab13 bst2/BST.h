#ifndef BST_H
#define BST_H

#include <iostream>

using namespace std;

template <class ItemType>
class TreeNode
{
public:
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
    void printPostOrder();
    void printPreOrder();
    int numLeaves();
    ItemType findMin();
    int size();
    int maximumDepth();
    bool isSumPresent(int sum);

private:
    TreeNode <ItemType> *root;
    TreeNode <ItemType> *insert(TreeNode<ItemType> *n , ItemType);
    TreeNode <ItemType> *remove(TreeNode <ItemType> *n , ItemType);
    bool find(TreeNode <ItemType> *n, ItemType);
    void printInOrder(TreeNode <ItemType> *n);
    void printPostOrder(TreeNode <ItemType> *n);
    void printPreOrder(TreeNode <ItemType> *n);
    int numLeaves(TreeNode <ItemType> *n);
    ItemType findMin(TreeNode <ItemType> *n);
    int size (TreeNode <ItemType> *n);
    int maximumDepth(TreeNode <ItemType> *n);
    bool isSumPresent(TreeNode<ItemType> *t, int sum);
};
#include "bst.cpp"
#endif // BST_H
