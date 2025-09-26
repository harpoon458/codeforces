#include <bits/stdc++.h>
using namespace std;
 
void ayush() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int main() {
    ayush();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        vector<int> q(n);
        
        for( int i = 0 ; i < n ; i++){
            cin >> p[i] ; 
            int x = n+1-p[i] ; 
            q[i] = x ; 
        }
        for (auto i : q) cout << i << " ";
        cout << '\n';
    }
    return 0;
}