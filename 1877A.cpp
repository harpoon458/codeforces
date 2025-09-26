#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ; cin>>t ;
    while(t--){
        int n;cin>>n ;
        vector<int> vec(n) ;
        for( int i = 0 ; i < n-1 ; i++){
            cin >> vec[i] ;
        } 
        int sum = 0 ; 
        for( auto i : vec ){ 
            sum -= i ;
        }
        cout << sum << '\n' ;
    }
    return 0;
}