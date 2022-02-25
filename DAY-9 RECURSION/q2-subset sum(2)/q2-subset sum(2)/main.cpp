//
//  main.cpp
//  q2-subset sum(2)
//
//  Created by vatsal nanda on 26/02/22.
//

class Solution {
      set<vector<int>> st;
public:
    void helper(vector<int> & nums,int idx,vector<int> &temp){
        if(idx==nums.size()){
            st.insert(temp);
            return;
        }
        temp.push_back(nums[idx]);
        helper(nums,idx+1,temp);
        temp.pop_back();
        helper(nums,idx+1,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());   //to avoid duplicates
         vector<vector<int>> ans;
         vector<int> temp;
         helper(nums,0,temp);
         for(auto &it: st)
                ans.push_back(it);
        return ans;
    }
};
