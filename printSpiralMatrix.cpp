#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col= matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        int firstRow = 0;
        int firstCol = 0;
        int lastRow = row-1;
        int lastCol = col-1;
        
        while(count<total){
            
            //print starting row
            for(int index=firstCol; count<total && index<=lastCol ; index++){
                ans.push_back(matrix[firstRow][index]);
                count++;
            }
            firstRow++;
            
            //print last column
            for(int index=firstRow; count<total && index<=lastRow; index++){
                 ans.push_back(matrix[index][lastCol]);
                count++;
            }
            lastCol--;
            
            //print last row
            for(int index = lastCol; count<total && index>=firstCol ;index--){
                ans.push_back(matrix[lastRow][index]);
                count++;
            }
            lastRow--;
            
            //print first col
            for(int index = lastRow; count<total && index>=firstRow ; index--){
                ans.push_back(matrix[index][firstCol]);
                count++;
            }
            firstCol++;
            
        }
        return ans;
    }
};