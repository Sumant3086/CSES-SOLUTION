#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    } 
    int mod=1e9+7;
    vector<int>dp(x+1,0);
    dp[0]=1;
    for(int i=1;i<=x;i++){
        for(int c:coins){
            if(i-c>=0){
                dp[i]=(dp[i]+dp[i-c])%mod;
            }
        }
    }
    cout<<dp[x]<<endl;
}