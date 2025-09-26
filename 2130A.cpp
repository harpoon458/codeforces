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
    int t ;cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector<int> testcase(n) ; 
        int score = 0 ; 
        for( int i = 0 ; i < n ; i++ ){
            cin >> testcase[i];
            if( testcase[i] == 0 ){
                score++;
            }
            else{
                score += testcase[i];
            }
        }
            cout << score << '\n';
        
    }
    return 0;
}