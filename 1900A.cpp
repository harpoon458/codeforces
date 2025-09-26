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
        string block ; cin >> block ; 
        vector<int> diff ;
        int count = 0 ;bool counter = false ; 
        int total = 0;
        for( int i = 0 ; i < n ; i++ ){
            if( block[i] == '.' ){
                count++; total++ ;
                if( count >= 3 ){
                    counter = true ;
                    break ;
                }
            }
            else{
                count = 0;
            }
        }
        counter ? cout << 2 : cout << total ;
        cout << '\n';
    }
    return 0;
}