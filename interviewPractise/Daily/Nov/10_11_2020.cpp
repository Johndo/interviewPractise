//
//  10_11_2020.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    for(int i = 0; i < A.size(); i++){
        reverse(A[i].begin(),A[i].end());
        for(int j=0; j<A[i].size(); j++){
            if(A[i][j] == 0){
                A[i][j] = 1;
            }else{
                A[i][j] = 0;
            }
        }
    }
    return A;
}
