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
