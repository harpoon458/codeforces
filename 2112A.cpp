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
        int a,x,y;cin>>a>>x>>y;
        (a-x)*(a-y) >=  0 ? cout << "Yes\n" : cout << "No\n" ; 
    }
    return 0;
}