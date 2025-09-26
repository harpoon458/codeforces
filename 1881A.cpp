#include <bits/stdc++.h> 
using namespace std; 
void ayush(){ 
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(NULL); 
    std::cout.tie(NULL); 
} 
bool ispartof(string s, string n) { 
    if (s.length() < n.length()) return false; // prevent out-of-range 
    for (int i = 0; i <= s.length() - n.length(); i++) { 
        if (s.substr(i, n.length()) == n) { 
            return true; 
        } 
    } 
    return false; 
} 
int main() {
    ayush();
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
 
        int cnt = 1;
 
        while (x.length() < s.length()) {
            x += x;
            cnt++;
        }
 
        // Try up to 2 more appends to cover edge overlaps
        for (int i = 0; i <= 2; ++i) {
            if (ispartof(x, s)) {
                cout << cnt-1<< '\n';
                break;
            }
            x += x;
            cnt++;
            if (i == 2) cout << -1 << '\n';
        }
    }
    return 0;
}