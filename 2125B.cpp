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
    int t ; cin >> t ;
    while(t--){
        long long a , b , k ; cin >> a >> b >> k ; 
        long long val = __gcd(a,b) ;
        if( a/val <= k && b/val <= k ){
            cout << 1 << '\n'; 
        }   
        else cout << 2 << '\n'; 
    }
    return 0;
}