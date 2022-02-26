//
//  main.cpp
//  q4-combination sum(2)
//
//  Created by vatsal nanda on 27/02/22.
//

class Solution {
public:
    void fun(int ind,int target,vector<int> &sub,vector<vector<int>> &ans,vector<int>& candidates){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(sub);
            }
            return;
        }
        if(candidates[ind]<=target){ //checks if index we want to include is smaller than the target
            sub.push_back(candidates[ind]);
            fun(ind+1,target-candidates[ind],sub,ans,candidates);
            sub.pop_back();
        }
        while(ind+1<candidates.size() && candidates[ind]==candidates[ind+1]){
            ind++; //removes duplicates
        }
        fun(ind+1,target,sub,ans,candidates);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> sub;
        sort(candidates.begin(),candidates.end());
        fun(0,target,sub,ans,candidates);
        return ans;
    }
};
