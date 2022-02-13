//
//  main.cpp
//  q3-Longest Consecutive sequence
//
//  Created by vatsal nanda on 13/02/22.
//

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int res =1;
        int count =1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1] ==1){
                count++;
                res = max(res,count);
            }
            else if(nums[i]-nums[i-1]>1){
                count =1;
            }
        }
        return res;
    }
};

