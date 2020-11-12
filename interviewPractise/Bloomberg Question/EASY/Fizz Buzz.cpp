//
//  Fizz Buzz.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/11/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

vector<string> fizzBuzz(int n) {
    vector<string> result;
    for (int i=1; i <= n; i++){
        if(i%3 == 0 and i%5 ==0 ){
            result.push_back("FizzBuzz");
        }else if (i%3 == 0){
            result.push_back("Fizz");
        }else if(i%5 ==0){
            result.push_back("Buzz");
        }else{
            result.push_back(to_string(i));
        }
    }
    return result;
}
