#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int maxL=1,currL=1;
    // for(int i=1;i<s.size();i++){
    for(size_t i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            currL++;
        } else {
            currL=1;
        }
        maxL=max(maxL,currL);
    }
    cout<<maxL<<endl;;
    return 0;
}