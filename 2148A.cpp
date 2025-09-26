#include <bits/stdc++.h>
using namespace std;
#define int long long
void ayush(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
signed main()
{
    ayush();
    int tt;cin>>tt;
    while(tt--){
        int n,x;cin>>x>>n;
        n%2 ? cout<<x<<'\n' : cout<<0<<'\n';
    }
    return 0;
}