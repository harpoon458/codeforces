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
        int a , b ; cin >> a >> b ;
        if( a == b ){
            cout << 0 << '\n' ; 
            
        } 
        else if( b%a == 0 && b>a ){
            cout << 1 << '\n' ; 
        }
        else if( a%b == 0 && a>b ){
            cout << 1 << '\n' ;
        }
        else{cout << 2 << '\n';}
    }
    return 0;
}