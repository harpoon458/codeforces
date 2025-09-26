#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i = 1 ; i <= t ; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool closeAB = 2*(min(a,b)+1)>=max(a,b) ;
        bool closeCD = 2*(min(c-a,d-b)+1)>=max(c-a,d-b);
        if(closeAB&&closeCD){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}

