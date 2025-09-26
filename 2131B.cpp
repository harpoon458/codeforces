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
    while (t--)
    {
        int n ; cin >> n ;
        for( int i = 1 ; i <= n ; i++ ){
            if( i == n && n%2==0 ){
                cout << 2 << ' ' ;
            }
            else{
                if(i%2) {cout << -1 << ' ';}
                else {cout << 3 << ' ';}
            }
        }
        cout << '\n';
    }
    
    return 0;
}