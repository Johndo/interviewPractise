//
//  10-11-2020-1.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <iostream>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode (int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


int maxAncestorDiff(TreeNode* root){
    return 0;
};



