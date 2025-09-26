#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        string a, b, c;
        cin >> n >> a >> m >> b >> c;
        string ba = "", fr = "";
        for (int i = 0; i < m; ++i) {
            if(c[i] == 'V')fr.push_back(b[i]);
            else ba.push_back(b[i]);
        }
        reverse(fr.begin(),fr.end());
        cout << fr + a + ba << '\n';
    }

    return 0;
}
