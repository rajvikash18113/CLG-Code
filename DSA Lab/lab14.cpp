// AIM - Program to traverse a Binary search tree in Pre-order, In-order and Post-order.

#include <iostream>
using namespace std;

/* A binary tree node has data, pointer to left child, and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

/* Given a binary tree, print its nodes according to the "bottom-up" postorder traversal. */
void Postorder(struct Node* node) {
    if (node == NULL) return;
    
    // first recur on left subtree
    Postorder(node->left);
    
    // then recur on right subtree
    Postorder(node->right);
    
    // now deal with the node
    cout << node->data << " ";
}

/* Given a binary tree, print its nodes in inorder */
void Inorder(struct Node* node) {
    if (node == NULL) return;
    
    // first recur on left child
    Inorder(node->left);
    
    // then print the data of node
    cout << node->data << " ";
    
    // now recur on right child
    Inorder(node->right);
}

/* Given a binary tree, print its nodes in preorder */
void Preorder(struct Node* node) {
    if (node == NULL) return;
    
    // first print data of node
    cout << node->data << " ";
    
    // then recur on left subtree
    Preorder(node->left);
    
    // now recur on right subtree
    Preorder(node->right);
}

/* Function to create a new node with given data */
struct Node* Insert(int data) {
    struct Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

/* Driver program to test the above functions */
int main() {
    struct Node* root = Insert(1);
    root->left = Insert(2);
    root->right = Insert(3);
    root->left->left = Insert(4);
    root->left->right = Insert(5);

    cout << "\nPreorder traversal of binary tree is \n";
    Preorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    Inorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    Postorder(root);

    return 0;
}
