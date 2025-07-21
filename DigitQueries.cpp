#include <bits/stdc++.h>
using namespace std;
void digitQueries(){
    long long k;
    cin>>k;
    long long digit=1,count=9,start=1;
    while(k>digit*count){
        k-=digit*count;
        digit++;
        count*=10;
        start*= 10;
    }
    long long num=start+(k-1)/digit;
    string s=to_string(num);
    cout<<s[(k-1)%digit]<<endl;
}
int main(){
    int q;
    cin>>q;
    while(q--){
        digitQueries();
    }
    return 0;
}