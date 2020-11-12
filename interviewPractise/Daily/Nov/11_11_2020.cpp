//
//  11_11_2020.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/11/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <math.h>

using namespace std;

int find_distance (vector<int>& p1,vector<int>p2 ){
    return sqrt( pow((p2[0]-p1[0]),2) + pow((p2[1]-p1[1]),2) );
}

bool valid_check(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4){
    double dst1_2 = find_distance(p1,p2);
    double dst2_3 = find_distance(p2,p3);
    double dst3_4 = find_distance(p3,p4);
    double dst4_1 = find_distance(p1,p4);
    double dgnl1_3 = find_distance(p1,p3);
    double dgnl2_4 = find_distance(p2,p4);
    
     if (dst1_2 and dst1_2 == dst2_3 and dst2_3 == dst3_4 and dst3_4 ==  dst4_1 and dgnl1_3 == dgnl2_4 ){
        return true;
    }else{
        return false;
    }
}

bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
    return valid_check(p1,p2,p3,p4) or valid_check(p1,p3,p2,p4) or valid_check(p1,p2,p4,p3);
}


//int main(int argc, const char* argv[]){
//    vector<int> p1;
//    p1.push_back(1);
//    p1.push_back(0);
//    vector<int> p2;
//    p2.push_back(-1);
//    p2.push_back(0);
//    vector<int> p3;
//    p3.push_back(0);
//    p3.push_back(1);
//    vector<int> p4;
//    p4.push_back(0);
//    p4.push_back(-1);
//
//    return validSquare(p1, p2, p3, p4);
//}
