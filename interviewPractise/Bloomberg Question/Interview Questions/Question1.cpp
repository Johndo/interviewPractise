//
//  Question1.cpp
//  interviewPractise
//
//  Created by John Doherty on 12/14/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <queue>
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0),left(nullptr),right(nullptr) {};
    TreeNode(int x): val(x),left(nullptr),right(nullptr) {};
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x),left(left),right(right) {};
};

void printInroder(TreeNode* root){
    if(root == nullptr){return;}
    std::cout << root->val << std::endl;
    printInroder(root->left);
    printInroder(root->right);
}

void print_Inroder(TreeNode* root){
    std::queue<TreeNode*> q;
    if(root == nullptr){return;}
    q.push(root);
    while(!q.empty()){
        TreeNode* temp = q.front();
        std::cout<< temp->val << std::endl;
        if (temp->left) {q.push(root->left);}
        if(temp->right){q.push(root->right);}
        q.pop();
    }
}

