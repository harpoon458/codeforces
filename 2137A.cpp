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
        int x , k ; cin >> k >> x ; 
        for( int i = 1 ; i <= k; i++ ){
            x *= 2 ;
        }
        cout << x << '\n'; 
    }
    return 0;
}