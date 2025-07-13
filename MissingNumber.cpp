#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end()); 
    for(int i=1;i<=n;i++){
        if(arr[i]!=i){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}