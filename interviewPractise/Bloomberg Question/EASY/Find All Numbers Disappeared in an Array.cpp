//
//  Find All Numbers Disappeared in an Array.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/12/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <set>

using namespace std;


vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> result;
    set<int> my_set;
    sort(nums.begin(),nums.end());
    int count = 1;
    for(int i =0; i<nums.size(); i++){
        my_set.insert(nums[i]);
    }
    for (int i =0; i<nums.size(); i++){
        if (my_set.find(count) == my_set.end()){
            result.push_back(count);
        }
        count++;
    }
    return result;
}
