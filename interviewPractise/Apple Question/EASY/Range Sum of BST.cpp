//
//  Range Sum of BST.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/29/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>


struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0),left(nullptr),right(nullptr) {};
    TreeNode(int x): val(x),left(nullptr),right(nullptr) {};
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x),left(left),right(right) {};
};


int rangeSumBST(TreeNode* root, int low, int high) {
    if (root == nullptr){
        return 0;
    }
    else if(root->val >= low and root->val <= high){
        return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high) ;
    }else{
        return rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
    }
}
