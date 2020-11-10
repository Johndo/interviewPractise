//
//  Minimum Time Visiting All Points.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <utility>//pair
#include <vector>

using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int num_sec=0;
    int curr_idx = 0;
    if (points.size() <= 1){
        return num_sec;
    }
    
    while(curr_idx+1 < points.size()){
        pair<int, int> start;
        pair<int, int> end;
        
        start.first = points[curr_idx][0];
        start.second = points[curr_idx][1];
        end.first = points[curr_idx+1][0];
        end.second = points[curr_idx+1][1];
        
        num_sec += max(abs(end.first - start.first), abs(end.second - start.second));
        curr_idx +=1;
    }
    return num_sec;
}




int main(int argc, const char* argv[]){
    return 0;
}
