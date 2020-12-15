//
//  Question3.cpp
//  interviewPractise
//
//  Created by John Doherty on 12/15/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>


using namespace std;
struct Pass{
    string station_name;
    int card_id;
    int timestamp;
};
class subwayTime{
      public:
      subwayTime(){};
    
  
    map<int, pair<string,int> > mapIn;
    map< pair<string,string>, pair<int,int> > timeMap;

    void swipeIn(string station,int id, int time){
        auto it = mapIn.find(id);
        if (it == mapIn.end()) {
            mapIn.insert(make_pair(id, make_pair(station, time)));
        }
    }
    
    void swipeOut(string station,int id, int time){
        auto it = mapIn.find(id);
        pair<string,string> temp_station = make_pair(it->second.first, station);
        if (it != mapIn.end()) {
            int tempTime = time - it->second.second;
            if (timeMap.find(temp_station) != timeMap.end()) {
                auto it2 = timeMap.find(temp_station);
                int sum = it2->second.first+tempTime;
                int freq = it2->second.second+1;
            
                timeMap.insert(make_pair(temp_station, make_pair(sum, freq)) );
            }else{
                timeMap.insert(make_pair (temp_station, make_pair(tempTime, 1)) );
            }
        }
    }
    
    int getAvgTime (string station1, string station2){
        pair<string,string> temp_station = make_pair(station1, station2);
        int avgTime=0;
        
        if(timeMap.find(temp_station) != timeMap.end()){
            auto it = timeMap.find(temp_station);
            avgTime = it->second.first/it->second.second;
            return avgTime;
            
        }
        return avgTime;
    }
};





int main() {
    subwayTime A ;
    A.swipeIn("A", 1, 20);
    A.swipeOut("C",1,30);
    cout <<A.getAvgTime("A","C") << endl;
    
    
    return 0;
}
