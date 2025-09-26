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
        int n , k; cin >> n >> k ; 
        vector<int> weather(n);
        for(int i = 0  ; i < n  ;i++  ){
            cin>>weather[i];
        } 
        int result = 0 , cnt = 0 ;
        for(int i = 0 ; i < n ; i++ ){
            if(weather[i]==0) cnt++ ;
            else cnt = 0 ;
            if( cnt == k ){
                result++;
                cnt = 0; 
                i++;
            }
        }
        cout << result << '\n' ;
    }
    return 0;
}