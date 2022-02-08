//
//  main.cpp
//  Q1-Rotate Image
//
//  Created by vatsal nanda on 08/02/22.
//

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        vector<vector<int>> matrix1( matrix.size() , vector<int> (matrix.size() ));
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                matrix1[i][j]=matrix[i][j];
            }
        }
        
        
        
        for(int j=0;j<matrix.size();j++)
        {
            for(int i=0;i<matrix.size();i++)
            {
               matrix[i][matrix.size()-j-1]= matrix1[j][i];
            }
        }
       
        
       
        
        
        
    }
};
