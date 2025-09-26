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
        int n,s;cin>>n>>s;
        vector<vector<int>> balls(n,vector<int>(4));
        int result=0;
        for(int i=0;i<n;i++){
            cin>>balls[i][0]>>balls[i][1]>>balls[i][2]>>balls[i][3];
            if((balls[i][0]==balls[i][1]) &&(balls[i][2]==balls[i][3]))result++;
            else if((balls[i][0]!=balls[i][1]) &&((balls[i][2]+balls[i][3])==s))result++;
        }
        cout<<result<<'\n';
    }
    return 0;
}