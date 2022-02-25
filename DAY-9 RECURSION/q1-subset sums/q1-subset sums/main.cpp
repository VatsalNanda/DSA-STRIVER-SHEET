//
//  main.cpp
//  q1-subset sums
//
//  Created by vatsal nanda on 25/02/22.
//

class Solution
{
    void subset_sum(const vector<int> &arr, const int &n, int i, int sum, vector<int> &ans){
        if (i == n){
            ans.push_back(sum);
            return;
        }
        
        //including i
        subset_sum(arr, n, i+1, sum+arr[i], ans);
        
        //not including i
        subset_sum(arr, n, i+1, sum, ans);
    }
public:
    vector<int> subsetSums(vector<int> arr, int n )
    {
        // Write Your Code here
        sort(arr.begin(), arr.end()); // do this
        
        vector<int> ans;
        subset_sum(arr, n, 0, 0, ans);
        // sort(ans.begin(), ans.end()); // not this
        return ans;
        
    }
};

