//
//  main.cpp
//  q3-Merge two sorted Arrays without extra space
//
//  Created by vatsal nanda on 08/02/22.
//

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int cnt=0;
        for(int i=m;i<nums1.size();i++)
        {
            nums1[i]=nums2[cnt];
            cnt++;
        }
        
        sort(nums1.begin(),nums1.end());
        
    }
};
