//
//  Remove All Adjacent Duplicates In String.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;

string removeDuplicates(string S) {
   bool rmv = true;
   int curr_idx = 0;
   while (rmv){
       
       if(S[curr_idx] == S[curr_idx+1]){
           S.erase(curr_idx, 2);
           curr_idx = 0;
           rmv = true;
           
       }else{
           curr_idx+=1;
       }
       if(curr_idx == S.size()){
           rmv = false;
       }
   }
   return S;
}

/*
string removeDuplicatesOPTMZD(string S) {
    string result;
    for (auto s : S) {
        if (result.size() > 0 && result.back() == s) {
            result.pop_back();
        } else {
            result += s;
        }
    }
    return result;
}
*/


