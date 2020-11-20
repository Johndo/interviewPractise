//
//  Jewels and Stones.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/20/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <set>
#include <string>

using namespace std;

int numJewelsInStones(string J, string S) {
    set<char>jewels;
    int result=0;
    
    for (int i=0; i<J.length(); i++){jewels.insert(J[i]);}
    
    for(int i=0; i<S.length(); i++){
        if(jewels.find(S[i]) != jewels.end()){result+=1;}
    }
    return result;
}
