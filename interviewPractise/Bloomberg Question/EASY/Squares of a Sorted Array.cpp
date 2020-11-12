//
//  Squares of a Sorted Array.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

vector<int> sortedSquares(vector<int>& A) {
    vector<int> result(A.size());
    
    for (int i = 0; i < A.size(); i++){
        result[i] = A[i]*A[i];
    }
    sort(result.begin(),result.end());
    return result;
}


