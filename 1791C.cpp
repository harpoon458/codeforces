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
        string s;
        cin >> s;
 
        int i = 0, j = n - 1;
        while (i < j && s[i] != s[j]) {
            i++;
            j--;
        }
        cout << (j - i + 1) << '\n';
    }
    return 0;
}