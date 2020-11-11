//
//  Single Number.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int sum = 0;
    for (int i =0; i < nums.size(); i++){
        sum^=nums[i];
    }
    return sum;
}
