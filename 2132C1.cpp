#include <bits/stdc++.h>
using namespace std ;
string tobase3( long long n ){
    if( n==0 ) return "0";
    string base3 = "";
    while(n>0){
        base3 += char('0'+n%3 ) ;
        n /= 3 ; 
    }
    return base3 ;
}
long long costofx(long long x) {
    long long cost = pow(3, x + 1);
    if (x >= 1) cost += x * pow(3, x - 1);
    return cost;
}

int main() {
    int t ; cin >> t ;
    while(t--){
        long long n ; cin >> n ;
        long long cost = 0 ;
        string deals = tobase3(n) ;
        for( int i = 0 ; i < deals.length() ; i++ ){
            cost += (deals[i]-'0')*costofx(i);
        }
        cout<<cost<<'\n';
    }
    return 0 ;
}