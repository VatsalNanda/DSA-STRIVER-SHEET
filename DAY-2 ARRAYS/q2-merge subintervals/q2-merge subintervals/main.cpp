//
//  main.cpp
//  q2-merge subintervals
//
//  Created by vatsal nanda on 09/02/22.
//

class Solution {
public:
vector<vector> merge(vector<vector>& intervals){
int n = intervals.size();
vector<vector> res;
sort(intervals.begin(), intervals.end());
for(int i = 0; i < n; i++){
if(res.size() == 0 || intervals[i][0] > res.back()[1]){
res.push_back(intervals[i]);
}
else{
res.back()[1] = max(res.back()[1], intervals[i][1]);
}
}
return res;

}
};
