#include <bits/stdc++.h>
using namespace std;
string grayCode(int n){
    string res;
    for(int i=0;i<(1<<n);i++){
        res+=bitset<32>(i^(i>>1)).to_string().substr(32-n);
        if(i<(1<<n)-1){
            res+=" ";
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<grayCode(n)<<endl;
    return 0;
}