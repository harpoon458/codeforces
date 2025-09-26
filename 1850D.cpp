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
        int n,k;cin>>n>>k;
        vector<int> rating(n);
        for(int i=0;i<n;i++)cin>>rating[i];
        int maxrange=1;
        int curr=1;
        sort(rating.begin(),rating.end());
        for(int i=1;i<n;i++){
            if(rating[i]-rating[i-1]<=k){
                curr++;
                maxrange = max(maxrange,curr);
            }
            else curr=1;
        }
        cout<<n-maxrange<<'\n';
    }
    return 0;
}