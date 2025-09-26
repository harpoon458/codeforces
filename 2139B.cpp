#include <bits/stdc++.h>
#define int long long
using namespace std;
void ayush(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
signed main()
{
    ayush();
    int t;cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i]; 
        sort(a.rbegin(), a.rend()); 
        int ans = 0;
        for (int i = 0; i < n && m > 0; i++) {
            ans += m * a[i];
            m--;
        } 
        cout << ans << '\n';
    }
    return 0;
}  