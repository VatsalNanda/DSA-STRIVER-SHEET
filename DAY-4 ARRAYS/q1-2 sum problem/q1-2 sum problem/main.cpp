//
//  main.cpp
//  q1-2 sum problem
//
//  Created by vatsal nanda on 12/02/22.
//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        vector<int> vec;
        
       sort(vec.begin(),vec.end());
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    vec.push_back(i);
                    vec.push_back(j);
                    break;
                }
            }
        }
        
        
        
        
        return vec;
        
        
        
    }
};
