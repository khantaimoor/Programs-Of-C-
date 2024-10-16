#include<iostream>
#include<queue>
using namespace std;

// Define the structure for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Constructor to initialize a new node
Node* createNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the binary tree
Node* insertNode(Node* root, int data) {
    // If the tree is empty, create a new node
    if (root == NULL) {
        root = createNode(data);
        return root;
    }

    // If the data is less than the root's data, insert into the left subtree
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    }
    // If the data is greater than the root's data, insert into the right subtree
    else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    return root;
}

// Function to perform in-order traversal of the binary tree
void inOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

// Function to perform pre-order traversal of the binary tree
void preOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// Function to perform post-order traversal of the binary tree
void postOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

// Function to perform level-order traversal of the binary tree
void levelOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->data << " ";

        if (temp->left != NULL) {
            q.push(temp->left);
        }

        if (temp->right != NULL) {
            q.push(temp->right);
        }
    }
}

int main() {
    Node* root = NULL;

    // Insert nodes into the binary tree
    root = insertNode(root, 8);
    root = insertNode(root, 3);
    root = insertNode(root, 10);
    root = insertNode(root, 1);
    root = insertNode(root, 6);
    root = insertNode(root, 14);
    root = insertNode(root, 4);
    root = insertNode(root, 7);
    root = insertNode(root, 13);

    // Perform traversals
    cout << "In-order traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrderTraversal(root);
    cout << endl;

    cout << "Level-order traversal: ";
    levelOrderTraversal(root);
    cout << endl;

    return 0;
}


