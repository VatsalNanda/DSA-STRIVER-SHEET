//
//  main.cpp
//  q1- Search a 2D Matrix
//
//  Created by vatsal nanda on 10/02/22.
//

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        bool res=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==target)
                {
                    res=true;
                    break;

                }
            }
        }
        
        return res;
        
    }
};
