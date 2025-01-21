#ifndef AVLTREE_HPP
#define AVLTREE_HPP

#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    int height;
    Node(int k) : key(k), left(nullptr), right(nullptr), height(1) {}
};

class AVLTree {
public:
    AVLTree();
    void insert(int key);
    void remove(int key);
    void preOrder();
    void inOrder();
    void postOrder();

private:
    Node* root;
    Node* insert(Node* node, int key);
    Node* remove(Node* node, int key);
    Node* minValueNode(Node* node);
    int getHeight(Node* node);
    int getBalance(Node* node);
    Node* rightRotate(Node* y);
    Node* leftRotate(Node* x);
    void preOrder(Node* node);
    void inOrder(Node* node);
    void postOrder(Node* node);
};

#endif