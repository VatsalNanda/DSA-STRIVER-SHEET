//
//  main.cpp
//  q1-set matrix zeroes
//
//  Created by vatsal nanda on 07/02/22.
//

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        bool row[m],col[n];
        for(int i=0;i<m;i++)
            row[i]=true;
        for(int i=0;i<n;i++)
            col[i]=true;
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=false;
                    col[j]=false;
                }
            }
        }
         
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]==false|| col[j]==false){
                    matrix[i][j]=0;
                }
            }
        }
        
        
        
    }
};
