#include <bits/stdc++.h>
using namespace std;
using int64 = long long; 
long long spiralNumber(){
    long long x,y;
    cin>>x>>y;
    long long n=max(x, y);
    long long ans;
    if(n%2==0){
        if(x==n){
            ans=n*n-y+1;
        }else{
            ans=(n-1)*(n-1)+x;
        }
    }else{
        if(y==n){
            ans=n*n-x+1;
        }else{
            ans=(n-1)*(n-1)+y;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<spiralNumber()<<endl;
    }
    return 0;
}
