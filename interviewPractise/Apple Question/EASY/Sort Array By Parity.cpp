//
//  Sort Array By Parity.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/29/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

vector<int> sortArrayByParity(vector<int>& A) {
    vector<int> even;
    vector<int> odd;
    
    for (int i=0; i < A.size(); i++){
        int num = A[i];
        if(num%2==0){
            even.push_back(num);
        }else{
            odd.push_back(num);
        }
    }
    even.insert(even.end(),odd.begin(),odd.end());
    return even;
}
