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
    int t ; cin>>t; 
    while(t--){
        int x,k;cin>>x>>k;
        if(k>x) cout<<1<<'\n'<<x<<'\n' ;
        else if(k==x) cout<<2<<'\n'<<1<<' '<<x-1<<'\n';
        else{
            if(x%k!=0)cout<<1<<'\n'<<x<<'\n';
            else cout<<2<<'\n'<<k-1<<' '<<x-k+1<<'\n';
        }
    }
    return 0;
}