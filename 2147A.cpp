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
        int x,y;cin>>x>>y;
        if(y>x)cout<<2<<'\n';
        else if( y==x||y==1||x-y==1)cout<<-1<<'\n';
        else cout<<3<<'\n';
    }
    return 0;
}