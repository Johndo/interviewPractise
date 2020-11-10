//
//  How Many Numbers Are Smaller Than the Current Number.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int>copy(nums);
    vector<int>result(nums.size());
    std:: sort(copy.begin(), copy.end());
    unordered_map<int, int> val_idx;
    
    for (int i = 0; i < copy.size() ; i ++){
        val_idx.insert(std::make_pair(copy[i],i));}
    
    for(int i = 0; i < nums.size(); i++){
        result[i]=val_idx[nums[i]];}
    
    return result;
}




int main(int argc, const char* argv[]){
return 0;
}
