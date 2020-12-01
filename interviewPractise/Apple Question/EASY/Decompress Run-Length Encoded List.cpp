//
//  Decompress Run-Length Encoded List.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/29/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>


using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> result;
    for(int i=0; i<nums.size(); i+=2){
        result.insert(result.end(), nums[i], nums[i+1]);
    }
    return result;
}


