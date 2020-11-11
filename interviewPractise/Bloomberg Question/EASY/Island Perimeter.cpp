//
//  Island Perimeter.cpp
//  interviewPractise
//
//  Created by John Doherty on 11/10/20.
//  Copyright © 2020 John Doherty. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {
    int p_meter = 0;
    for (int i = 0; i < grid.size(); i++){
        vector <int> row = grid[i];
        for (int j = 0; j < row.size(); j++){
            if(row[j] == 1){
                int temp = 4;
                
                //check up
                if (i-1 >= 0){
                    if(grid[i-1][j] == 1 ){
                        temp -=1;
                    }
                }
                
                //check down
                if(i+1 < grid.size()){
                    if(grid[i+1][j] == 1){
                        temp -=1;
                    }
                }
                
                //check left
                if(j+1 < row.size()){
                    if(grid[i][j+1] == 1){
                        temp -=1;
                    }
                }
                
                //check right
                if(j-1 >= 0){
                    if(grid[i][j-1] == 1){
                        temp -=1;
                    }
                }
                
                p_meter +=temp;
            }
        }
        
    }
    return p_meter;
}
