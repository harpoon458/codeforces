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
    int t ; cin >> t; 
    while(t--){
        int x,y,a,b;cin>>x>>y>>a>>b;
        if( (a-x)<=(b-y) && b>=y ){
            int total = b-y ; 
            int newx = x + (b-y) ;
            newx = newx-a ; 
            total += newx ;
            cout<<total<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
    return 0;
}