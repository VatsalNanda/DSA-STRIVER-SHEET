//
//  main.cpp
//  q4-Majority Element-II
//
//  Created by vatsal nanda on 10/02/22.
//

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1=nums.size();
        int n;
        n=floor(n1/3);
        
        
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<n1;i++)
        {
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto x:mp)
        {
           if(x.second>n)
           {
               ans.push_back(x.first);
           }
        }
        
        return ans;
        
    }
};
