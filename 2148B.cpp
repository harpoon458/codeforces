#include <bits/stdc++.h>
using namespace std;
void ayush(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
int main()
{
    ayush();
    int t;cin>>t;
    while(t--){
        int n,m,x,y;cin>>n>>m>>x>>y;
        vector<int> xline(n) , yline(m);
        for(int i=0;i<n;i++) cin>>xline[i];
        for(int i=0;i<m;i++) cin>>yline[i];
        cout<<n+m<<'\n'; 
    }
    return 0;
}