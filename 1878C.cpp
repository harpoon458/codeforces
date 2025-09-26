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
        int n,k,x;cin>>n>>k>>x;
        int maxrange=((k*(2*n-k+1))/2);
        int minrange=((k*(k+1))/2);
        (minrange<=x)&&(x<=maxrange) ? cout<<"YES\n" : cout<<"NO\n";        
    }
    return 0;
}