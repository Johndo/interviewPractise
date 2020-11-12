//
//  Move Zeroes.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/11/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int last_seen = 0;
    for (int i = 0 ; i < nums.size() ; i++){
        if(nums[i] != 0){
            nums[last_seen] = nums[i];
            last_seen+=1;
        }
    }
    for (int i = last_seen ; i < nums.size() ; i++ ){
        nums[i]=0;
    }
}
