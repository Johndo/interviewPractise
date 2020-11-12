//
//  Reverse Words in a String III.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <sstream>// string stream

using namespace std;

string reverseWords(string s) {
    if (s.length() < 1){
        return "";
    }
    
    stringstream sentence(s);
    string word;
    string result;
    
    while(sentence >> word){
        reverse(word.begin(),word.end());
        result +=word+" ";
    }
    result.pop_back();
    return result;
}
string reverseWords_c(string s) {
    //char s[] = p;
    if (s.length() < 1){
        return "";
    }
    
    stringstream sentence(s);
    string word;
    string result;
    
    while(sentence >> word){
        reverse(word.begin(),word.end());
        result +=word+" ";
    }
    result.pop_back();
    return result;
}

