//
//  Kids With the Greatest Number of Candies(1431).cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;


vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int maxCandy = 0;
    vector<bool>result;
    
    for (int i = 0; i < candies.size(); i++ ){
        if (maxCandy < candies[i] ){maxCandy = candies[i];}
    }
    
    for (int i = 0; i < candies.size(); i++ ){
        if(candies[i]+extraCandies >= maxCandy){
            result.push_back(true);
        }else{
            result.push_back(false);
        }
    }
    return result;
}



int main(int argc , const char* argv[]){
    
}


