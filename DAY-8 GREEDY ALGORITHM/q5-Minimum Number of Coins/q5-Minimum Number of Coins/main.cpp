//
//  main.cpp
//  q5-Minimum Number of Coins
//
//  Created by vatsal nanda on 04/03/22.
//

int findMinimumCoins(int amount)
{
    // Write your code here
    int t;
    cin>>t;
    while(t--)
    {
    int deno=[1, 2, 5, 10, 20, 50, 100, 500, 1000];
    int n=9;
    vector<int> ans;
    for(int i=n-1;i>=0;i--)
    {
        while(amount>=deno[i]){
            amount-=deno[i];
            ans.push_back(deno[i]);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
        
    }
    
}
