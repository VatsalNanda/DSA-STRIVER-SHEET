//
//  main.cpp
//  q4-Find the Duplicate Number
//
//  Created by vatsal nanda on 08/02/22.
//

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int ans;
        for(auto x:mp)
        {
            if(x.second>=2)
            {
                ans=x.first;
                break;
            }
        }
        
        return ans;
        
    }
};
