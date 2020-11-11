//
//  Minimum Absolute Difference.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    vector<vector<int>> result;
    
    if (arr.size()<2){
        return result;
    }
    
    sort(arr.begin(), arr.end());
    int min_diff =INT_MAX;

    for(int i =0; i <arr.size()-1; i++){
        int temp_num = arr[i+1]-arr[i];
        vector<int> temp;
        
        if(min_diff > temp_num){
            result.clear();
            min_diff = temp_num;
            temp.push_back(arr[i]);
            temp.push_back(arr[i+1]);
            result.push_back(temp);

        }else if (min_diff == temp_num){
            temp.push_back(arr[i]);
            temp.push_back(arr[i+1]);
            result.push_back(temp);
        }
    }
    return result;
}
int main(int argc, const char* argv[]){
    return 0;
}
