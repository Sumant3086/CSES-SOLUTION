#include <bits/stdc++.h>
using namespace std;
void permutations(int n){
    if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n;
    permutations(n);
    return 0;
}