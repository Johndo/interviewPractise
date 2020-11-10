//
//  main.cpp
//  interviewPractise
//
//  Created by John Doherty on 9/20/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

/*BUDDY_STRING*/
bool buddyStrings(string A, string B) {
    vector<int>swap_index;
    bool repeat=true;
    unordered_map<char,bool>alphabets;
           
    if (A.size() != B.size()){return false;}
    if (A.size() == 0  and B.size() == 0 ) {return false;}

    for (int i = 0 ; i < A.size(); i++){
        if(A[i] != B[i]){swap_index.push_back(i);}
        /*if(alphabets.find(A.at(i)) != alphabets.end()){
            repeat = false;
        }else{
            char temp = A.at(i);
            //alphabets.insert (make_pair<char,bool>({temp,true}));
        }*/
    }
           
    if(swap_index.empty()){
        if( repeat ){return true;}
        else{return false;}
    }
    if(swap_index.size() > 2){return false;}
    
           
   for (int i = 0 ; i < swap_index.size(); i = i + 2){
       if (! (A[swap_index[i]] == B[swap_index[i+1]] && A[ swap_index[i+1] ] == B[ swap_index[i] ]) ){return false;}
   }
   return true;
}


string solution(string &S, int K) {
    // write your code in C++14 (g++ 6.2.0)
    vector<string>weekdays = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    string result = "";
    int index = -1;
    
    for (int i = 0; i < weekdays.size(); i++)
    {
        if (S == weekdays[i])
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        index = (index+K)%7;
        result = weekdays[index];
    }
    return result;
    
}


#include <algorithm>
#include <set>
#include <vector>

typedef std::pair<unsigned, unsigned> Point;



std::string text = "Let;me;split;this;into;words";




class Battleship
{
public:
    Battleship(const Point& begin, const Point& end) : begin(begin), end(end), area((end.first - begin.first) * (end.second - begin.second)) {    }

    bool hit(const Point& hitPosition)
    {
        if (hitPosition.first >= begin.first
            && hitPosition.second >= begin.second
            && hitPosition.first <= end.first
            && hitPosition.second <= end.second)
        {
            hits.insert(hitPosition);
            return true;
        }

        return false;
    }

    bool isHit() const
    {
        return hits.size() > 0 && hits.size() < area;
    }

    bool isSunk() const
    {
        return hits.size() == area;
    }

private:
    Point begin;
    Point end;
    std::set<Point> hits;
    unsigned area;
};

class Board
{
public:
    void addBattleship(const Point& begin, const Point& end){
        battleships.emplace_back(begin, end);
    }

    void hit(const Point& position){
        for (auto& bs : battleships){
            if (bs.hit(position))
                break;
        }
    }

    unsigned sunkNumber() const{
        return std::count_if(battleships.cbegin(), battleships.cend(), [](const auto& bs) { return bs.isSunk(); });
    }

    unsigned hitNumber() const{
        return std::count_if(battleships.cbegin(), battleships.cend(), [](const auto& bs) { return bs.isHit(); });
    }

    std::vector<Battleship> battleships;
};

int solutio(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int maxcount=0;
    int currcount=0;

    for (int i = 0; i < S.size(); i++){
        if(S[i]==S[i-1]){currcount+=1;}
        else{currcount =1;}
        if (currcount > maxcount) {maxcount = currcount;}
    }
    return maxcount;
}

vector<int> bankRequests(vector<int> balances, vector<string> requests) {
    
    string withdraw = "withdraw";
    string trans = "transfer";
    string depo = "deposit";
    
    
    
    
    for (int i = 0; i < requests.size(); i++) {
        string currenttask = requests[i];
        
        if (currenttask[0] == withdraw[0]) {
            std::size_t pos = requests[i].find(withdraw);
            string sub_str = requests[i].substr(pos+withdraw.size()+1);
            
     
            
            //int account = std::stoi(requests[i].at(9));
            
        }
        else if (requests[i].find(trans)){
            
        }
        else if (requests[i].find(depo)){
            
        }
        
    }
    return balances;
}



void fixvector(vector<string> one, vector<string> two){
    int i = 0;
    int j = 0;
    
    int erase_start = 0;
    
    while( ( i < j and j < two.size() ) or i > one.size()  ){
        
        if (one[i] == two[i]){
            
            if (j == 0) {
                erase_start = i;
            }
            j+=1;
        }
        else {
            j = 0;
        }
        i+=1;
    }
}






int main(int argc, const char * argv[]) {
    // insert code here...
    /*
    cout << "Hello, World!\n";
    bool test = buddyStrings("ab","ab");
    if (test) {
        cout << "True" << endl;
    }else{
         cout << "False" << endl;
    }
    string test = "Wed";
    int k = 2;
    string out = solution(test,k);
    cout << out << endl;
     
     
     
     std::string str = "123";
     int num;

     // using stoi() to store the value of str1 to x
     num = std::stoi(str);

     std::cout << num;
    //////////////////////////////////////////
     
     // declaring and initializing character array
      char str[] = "456";
      int num = std::atoi(str);

     std::cout << "num = " << num;
     
     //////////////////////////////////////////
     
     int num = 123;
     
     std::string str = to_string(num);

     std::cout << str;
    /////////////////////////////////////////

     int num = 15;
     
       // creating stringstream object ss
       std::stringstream ss;
     
       // assigning the value of num to ss
       ss << num;
     
       // initializing string variable with the value of ss
       // and converting it to string format with str() function
       std::string str = ss.str();
       std::cout << str;
     /////////////////////////////////////////
     
     
     
     
     */
    
    string s = "abbcccddddeeeeedcba";
    vector<int>balances= {10, 100, 20, 50, 30};
    vector<string> requests = {"withdraw 2 10","transfer 5 1 20","deposit 5 20","transfer 3 4 15"};
    
    vector<int> result = bankRequests(balances,requests);
    
    
    cout << solutio(s) << endl;
    

    
    
    
    return 0;
}
