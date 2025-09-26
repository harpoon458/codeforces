#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void ayush() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
 
int main() {
    ayush();
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll result = 0;
        for (int i = 1; i < n; i += 2) {
            ll left = a[i - 1];
            ll right = (i + 1 < n ? a[i + 1] : 0);
            ll need = left + right;
            if (a[i] < need) {
                ll deficit = need - a[i];
                result += deficit;
                ll reduce_right = min(right, deficit);
                a[i + 1] -= reduce_right;
                deficit -= reduce_right;
                if (deficit > 0) {
                    ll reduce_left = min(left, deficit);
                    a[i - 1] -= reduce_left;
                    deficit -= reduce_left;
                }
            }
        }
        cout << result << "\n";
    }
    return 0;
}