//
//  Merge Two Binary Trees.cpp
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

TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
    
    if(t1 != NULL and t2 != NULL){
        t1->val +=t2->val;
    }else if (t2 == NULL){
        return t1;
    }else if (t1 == NULL ){
        return t2;
    }
    t1->left = mergeTrees(t1->left, t2->left);
    t1->right = mergeTrees(t1->right, t2->right);
    return t1;
}
