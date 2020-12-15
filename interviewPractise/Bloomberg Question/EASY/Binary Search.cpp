//
//  Binary Search.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/30/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    for (int i =0; i<nums.size(); i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}

int b_search(vector<int>& nums, int target) {
    int p, l=0,r=(int)nums.size()-1;
    while(l<=r){
        p= l+(r-l)/2;
        if(nums[p] == target){
            return p;
        }
        if(target < nums[p]){
            r=p-1;
        }else{
            l=p+1;
        }
    }
    return -1;
}
