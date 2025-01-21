#include "../include/AVLTree.hpp"

int main() {
    int n;
    cin >> n;
    AVLTree tree;
    
    while (n--) {
        char op;
        int key;
        cin >> op >> key;
        if (op == 'i') {
            tree.insert(key);
        } else if (op == 'r') {
            tree.remove(key);
        }
    }

    tree.preOrder();
    tree.inOrder();
    tree.postOrder();

    return 0;
}