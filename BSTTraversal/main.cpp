//
//  main.cpp
//  BSTTraversal
//
//  Created by adeeb mohammed on 14/01/20.
//  Copyright © 2020 adeeb mohammed. All rights reserved.
// program for traversing the binary search tree
// inorder traversal -> left subtree , root ,right subtree
// preorder traversal -> root , left subtree, right subtree
// post order traversal -> left subtree, right subtree, root

#include <iostream>
#include <vector>

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

std::vector<int> inOrderTraverse(BST *tree, std::vector<int> array) {
    if(tree == NULL){
        return array;
    }
    array = inOrderTraverse(tree->left, array);
    array.push_back(tree->value);
    array = inOrderTraverse(tree->right, array);
    return array;
}

std::vector<int> preOrderTraverse(BST *tree, std::vector<int> array) {
    if(tree == NULL){
        return array;
    }
    array.push_back(tree->value);
    array = preOrderTraverse(tree->left, array);
    array = preOrderTraverse(tree->right, array);
    return array;
}

std::vector<int> postOrderTraverse(BST *tree, std::vector<int> array) {
    if(tree == NULL){
        return array;
    }
    array = postOrderTraverse(tree->left, array);
    array = postOrderTraverse(tree->right, array);
    array.push_back(tree->value);
  return array;
}


int main(int argc, const char * argv[]) {
    
    std::cout << "Function for traversing binary search tree\n";
    return 0;
}
