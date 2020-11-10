//
//  Split a String in Balanced Strings.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;

int balancedStringSplit(string s) {
    int r = -1;
    int l = -1;
    int num_split = 0;
    for(int i = 0; i < s.length(); i ++){
        if(s[i] == 'R' ){
            r+=1;
        }else if (s[i] == 'L'){
            l+=1;
        }
        if(r == l and r > -1 and l > -1){
            num_split+=1;
        }
    }
    return num_split;
}



int main(int argc, const char* argv[]){
    
}
