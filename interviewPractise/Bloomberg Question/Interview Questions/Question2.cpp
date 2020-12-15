//
//  Question2.cpp
//  interviewPractise
//
//  Created by John Doherty on 12/15/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>



std::vector<int> findIndex(std::vector<int> nums, int target){
    std::vector<int> result(2);
    
    int left = 0;
    int right = (int)nums.size()-1;
    int target_index = -1;
    
    while(left <= right){
        int pivot = left+(right-left)/2;
        if (nums[pivot]== target) {
            target_index = pivot;
            break;
        }
        if(nums[pivot] < target){
            right = pivot-1;
        }else{
            left = pivot+1;
        }
    }
    
    if (target_index == -1) {
        return {-1,-1};
    }else{
        for (int i = target_index; i<nums.size(); i++) {
            if ((nums[i+1] =! nums[i])) {
                result.push_back(i);
            }
        }
        for (int i = target_index; i>0; i--) {
            if ((nums[i-1] =! nums[i])) {
                result.push_back(i);
            }
        }
    }
    return result;
}
