#include <bits/stdc++.h>
using namespace std;
string palindromeReorder(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    
    string half = "";
    char oddChar = '\0';
    for (auto& pair : freq) {
        if (pair.second % 2 == 1) {
            if (oddChar != '\0') return "NO SOLUTION";  
            oddChar = pair.first;
        }
        half += string(pair.second / 2, pair.first);
    }
    
    string reversedHalf = half;
    reverse(reversedHalf.begin(), reversedHalf.end());
    
    if (oddChar != '\0') {
        return half + oddChar + reversedHalf;
    } else {
        return half + reversedHalf;
    }
}
int main(){
    string s;
    cin>>s;
    cout<<palindromeReorder(s)<<endl;
    return 0;
}