//
//  Valid Parentheses.cpp
//  interviewPractise
//
//  Created by John Doherty on 12/9/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char> check;
    if (s.length()==0){
        return false;
    }
    
    if(s[0] == ')' or s[0] == '}' or s[0] == ']' ){
        return false;
    }
    
    check.push(s[0]);
    
    for (int i = 1; i<s.length(); i++){
        if (s[i] == '(' or s[i] == '{' or s[i] == '[' ){
            check.push(s[i]);
        }else if (s[i] == ')' or s[i] == '}' or s[i] == ']' ){
            if (check.empty()){
                return false;
            }
            if (check.top() == '(' and s[i]==')'){
                check.pop();
            }else if (check.top() == '{' and s[i]== '}'){
                check.pop();
            }else if (check.top() == '[' and s[i]==']'){
                check.pop();
            }else{
                return false;
            }
        }
    }
    return check.empty();
}
