#include <bits/stdc++.h>
using namespace std; 
vector<int>weights; 
int n; 
long long dfs(int i,long long sum1,long long sum2){
    if(i==n){
        return llabs(sum1-sum2);
    }
    return min(dfs(i+1,sum1+weights[i],sum2),dfs(i+1,sum1,weights[i]+sum2));
    
}
int main(){ 
    cin>>n;
    weights.resize(n);
    for(int i=0;i<n;i++){
        cin>>weights[i];
    }
    cout<<dfs(0,0,0)<<endl;
}