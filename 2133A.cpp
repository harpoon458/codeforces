#include <bits/stdc++.h>
using namespace std ;
void ayush() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
int main(){
    ayush();
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector<int> vec(n);
        for( int i = 0 ; i < n ; i++ ){
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        bool counter = false ;
        for( int i = 1 ; i < n ; i++ ){
            if( vec[i] == vec[i-1] ){
                counter = true ;
                break ;
            }
        }
        counter ? cout << "YES" : cout << "NO" ; 
        cout << '\n' ;  
    }
    return 0 ;
}