//
//  12_11_2020.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/12/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>


using namespace std;



void helper(vector<int> ans,vector<int> tmp,vector<vector<int>> &rez ){
    for(int i = 0; i < tmp.size(); i++){
        ans.push_back(tmp[i]);
        tmp.erase(tmp.begin() + i);
        if (tmp.size() == 0) {rez.push_back(ans);return;}
        
        helper(ans, tmp, rez);
        
        tmp.insert(tmp.begin()+i,ans.back());
        ans.pop_back();
    }
    return;
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> rez;
    vector <int> ans;
    helper (ans,nums,rez);
    return rez;
}


//int main (int argc, const char* argv[]){
//    vector<int> nums;
//    nums.push_back(1);
//    nums.push_back(1);
//    nums.push_back(2);
//
//    vector<vector<int>> result = permute(nums);
//}
