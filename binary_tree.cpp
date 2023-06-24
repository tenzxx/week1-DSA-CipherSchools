#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(int value) {
        TreeNode* newNode = new TreeNode(value);

        if (root == nullptr) {
            root = newNode;
            return;
        }

        TreeNode* current = root;
        while (true) {
            if (value < current->data) {
                if (current->left == nullptr) {
                    current->left = newNode;
                    return;
                }
                current = current->left;
            } else {
                if (current->right == nullptr) {
                    current->right = newNode;
                    return;
                }
                current = current->right;
            }
        }
    }

    void printInOrder(TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        printInOrder(node->left);
        cout << node->data << " ";
        printInOrder(node->right);
    }

    void printInOrderTraversal() {
        cout << "In-order traversal: ";
        printInOrder(root);
        cout << endl;
    }
};

int main() {
    BinaryTree binaryTree;
    binaryTree.insert(5);
    binaryTree.insert(3);
    binaryTree.insert(7);
    binaryTree.insert(2);
    binaryTree.insert(4);
    binaryTree.insert(6);
    binaryTree.insert(8);

    binaryTree.printInOrderTraversal();

    return 0;
}
