#include <bits/stdc++.h>
using namespace std;
void coinPiles(long long a, long long b){
    long long sum=a+b;
    if(sum%3!=0 || a<sum/3 || b<sum/3){
        cout<<"NO"<<endl;
        return;
    }else{
        cout<<"YES"<<endl;
        return;
    }
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        coinPiles(a,b);
    }
    return 0;
}