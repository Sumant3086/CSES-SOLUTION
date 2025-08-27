#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>ticket(n);
    vector<int>person(m);
    for(int i=0;i<n;i++){
        cin>>ticket[i];
    }
    for(int i=0;i<m;i++){
        cin>>person[i];
    }
    multiset<int>st(ticket.begin(),ticket.end());
    for(int i:person){
        auto it=st.upper_bound(i);
        if(it==st.begin()){
            cout<<-1<<" ";
        }else{
            it--;
            cout<<*it<<" ";
            st.erase(it);
        }
    }
    return 0;
}