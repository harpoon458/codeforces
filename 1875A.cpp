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
        int a,b,n;cin>>a>>b>>n;
        vector<int> arr(n);
        int count=b;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]>(a-1) ? count+=a-1 : count += arr[i];
        }
        cout<<count<<'\n';
    }
    return 0;
}