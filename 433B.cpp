#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void ayush() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
signed main() {
    ayush();
    int n; 
    cin >> n;
 
    vector<int> ar(n), a(n), pre(n), pr(n);
    for(int i=0; i<n; i++) {
        cin >> ar[i];
        a[i] = ar[i];
    }
 
    sort(a.begin(), a.end());
 
    pre[0] = ar[0];
    for(int i=1; i<n; i++) pre[i] = pre[i-1] + ar[i];
 
    pr[0] = a[0];
    for(int i=1; i<n; i++) pr[i] = pr[i-1] + a[i];
 
    int q; 
    cin >> q;
    while(q--) {
        int type, l, r;
        cin >> type >> l >> r;
        if(type == 1) {
            if(l != 1) cout << pre[r-1] - pre[l-2];
            else cout << pre[r-1];
        } else {
            if(l != 1) cout << pr[r-1] - pr[l-2];
            else cout << pr[r-1];
        }
        cout << "\n";
    }
    return 0;
}