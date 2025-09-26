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
        int n ; cin >> n ; 
        vector<int> a(n) ;
        vector<int> b(n) ;
        for( int i = 0 ; i < n ; i++ ) cin >> a[i] ;
        for( int i = 0 ; i < n ; i++ ) cin >> b[i] ;
        int diff = 1 ; 
        for( int i = 0 ; i < n ; i++ ){
            if((a[i]-b[i])>=0) diff += a[i]-b[i]  ;
        }
        cout << diff << '\n' ; 
    }
    return 0;
}