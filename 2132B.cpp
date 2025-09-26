#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void ayush(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
bool isrepeated( ll n){
    int lastdigit = n%10 ;
    n /= 10 ; // can work cuz n >= 11
    while(n){
        int curr = n%10 ;
        if( curr != lastdigit ){
            return false ;
        } 
        n /= 10;
    }
    return true ;
}
signed main()
{
    ayush();
    int t; cin >> t ; 
    while(t--){
        ll n ; cin >> n ;
        if(n%11 != 0 ){
            cout << 0 ;
        }
        else{
            if(isrepeated(n)){
                int len = to_string(n).length();
                cout << 2 + len%18 ; 
            }
            else{
                cout << 1 << '\n';
                cout << "";
            }
        }

    }
    return 0;
}