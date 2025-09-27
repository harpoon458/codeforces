#include <bits/stdc++.h>
using namespace std;
#define int long long

void ayush(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool valid(int x) {
    string s = to_string(x);
    if(s.back() == '9') return false;      
    if(s.front() != '1') return false;     
    for(int i=1; i<(int)s.size()-1; i++) { 
        if(s[i] == '0') return false;
    }
    return true;
}

signed main() {
    ayush();
    int tt; cin >> tt;
    while(tt--) {
        int x; cin >> x;
        cout << (valid(x) ? "YES\n" : "NO\n");
    }
    return 0;
}