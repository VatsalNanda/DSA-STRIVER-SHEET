//
//  main.cpp
//  q3-Majority Element
//
//  Created by vatsal nanda on 10/02/22.
//

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n1=nums.size();
        int n;
        n=floor(n1/2);
        
        
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<n1;i++)
        {
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto x:mp)
        {
           if(x.second>n)
           {
               ans=x.first;
               break;
           }
        }
        
        return ans;
        
    }
};
