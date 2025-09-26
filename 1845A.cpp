#include <bits/stdc++.h>
using namespace std;
 
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
int main() {
    fastIO();
    int t; cin >> t;
    while (t--) {
        int n, k, x; cin >> n >> k >> x;
        if (x != 1) {
            cout << "Yes\n" << n << '\n';
            for (int i = 0; i < n; ++i) cout << "1 ";
            cout << '\n';
        } else if (k == 1 || (k == 2 && n % 2)) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
            if (k == 2) {
                cout << n / 2 << '\n';
                for (int i = 0; i < n / 2; ++i) cout << "2 ";
            } else {
                cout << n / 2 << '\n';
                for (int i = 0; i < n / 2 - 1; ++i) cout << "2 ";
                cout << (n % 2 ? "3" : "2") << '\n';
            }
        }
    }
    return 0;
}