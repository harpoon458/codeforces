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
        vector<long long> test(n) ;
        for( int i = 0 ; i < n ; i++) {cin >> test[i];} 
        int result = 0 ;
        for(int i=0;i<n-1;i++){
            if( test[i]%2 == test[i+1]%2 ){ /*they are of same parity*/
                result++ ;
            }
            
        }
        cout << result << '\n' ;
    }
    return 0;
}