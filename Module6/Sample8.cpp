//AVL
//Left Rotation (LL)
//Right Rotation (RR)
//Left-Right Rotation (LR)
//Right-Left Rotation (RL)


#include <iostream>
using namespace std;

// Node structure
struct Node {
    int key;
    Node* left;
    Node* right;
    int height;
};

// Function to get the height of the node
int getHeight(Node* n) {
    return (n == nullptr) ? 0 : n->height;
}

// Function to calculate balance factor
int getBalanceFactor(Node* n) {
    return (n == nullptr) ? 0 : getHeight(n->left) - getHeight(n->right);
}

// Function to create a new node
Node* createNode(int key) {
    Node* node = new Node();
    node->key = key;
    node->left = nullptr;
    node->right = nullptr;
    node->height = 1;
    return node;
}

// Right Rotation (Single Rotation)
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // Rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;

    cout << "Performed Right Rotation on node " << y->key << "\n";
    return x;
}

// Left Rotation (Single Rotation)
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // Rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    cout << "Performed Left Rotation on node " << x->key << "\n";
    return y;
}

// Left-Right Rotation (Double Rotation)
Node* leftRightRotate(Node* node) {
    cout << "Performing Left-Right Rotation on node " << node->key << "\n";
    node->left = leftRotate(node->left);  // Left rotation on left child
    return rightRotate(node);             // Right rotation on root
}

// Right-Left Rotation (Double Rotation)
Node* rightLeftRotate(Node* node) {
    cout << "Performing Right-Left Rotation on node " << node->key << "\n";
    node->right = rightRotate(node->right); // Right rotation on right child
    return leftRotate(node);                // Left rotation on root
}

// Function to display tree (in-order traversal)
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

// Function to simulate AVL rotations
void simulateRotations() {
    cout << "\n----- Example 1: Right Rotation (RR) -----\n";
    Node* rootRR = createNode(30);
    rootRR->left = createNode(20);
    rootRR->left->left = createNode(10);
    cout << "Before Right Rotation (Inorder): ";
    inorder(rootRR);
    cout << "\n";
    rootRR = rightRotate(rootRR);
    cout << "After Right Rotation (Inorder): ";
    inorder(rootRR);
    cout << "\n";

    cout << "\n----- Example 2: Left Rotation (LL) -----\n";
    Node* rootLL = createNode(10);
    rootLL->right = createNode(20);
    rootLL->right->right = createNode(30);
    cout << "Before Left Rotation (Inorder): ";
    inorder(rootLL);
    cout << "\n";
    rootLL = leftRotate(rootLL);
    cout << "After Left Rotation (Inorder): ";
    inorder(rootLL);
    cout << "\n";

    cout << "\n----- Example 3: Left-Right Rotation (LR) -----\n";
    Node* rootLR = createNode(30);
    rootLR->left = createNode(10);
    rootLR->left->right = createNode(20);
    cout << "Before Left-Right Rotation (Inorder): ";
    inorder(rootLR);
    cout << "\n";
    rootLR = leftRightRotate(rootLR);
    cout << "After Left-Right Rotation (Inorder): ";
    inorder(rootLR);
    cout << "\n";

    cout << "\n----- Example 4: Right-Left Rotation (RL) -----\n";
    Node* rootRL = createNode(10);
    rootRL->right = createNode(30);
    rootRL->right->left = createNode(20);
    cout << "Before Right-Left Rotation (Inorder): ";
    inorder(rootRL);
    cout << "\n";
    rootRL = rightLeftRotate(rootRL);
    cout << "After Right-Left Rotation (Inorder): ";
    inorder(rootRL);
    cout << "\n";
}

int main() {
    simulateRotations();
    return 0;
}
