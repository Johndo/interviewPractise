//
//  Best Time to Buy and Sell Stock II.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/30/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int max_profit =0;
    for (int i=1; i<prices.size(); i++){
        if(prices[i-1]<prices[i]){
            max_profit+=prices[i]-prices[i-1];
        }
    }
    return max_profit;
}


