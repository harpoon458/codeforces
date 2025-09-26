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
    int t ; 
    cin >> t ;
    while((t--))
    {
        int n ; cin >> n ;
        vector<long long> grump(n) ; 
        for( int i = 0 ; i < n ; i++ ){
            cin >> grump[i];
        }
        sort(grump.begin(),grump.end());
        long long minele = 0 ;
        for( int i = n-1 ; i >= 0 ; i -= 2){
            minele += grump[i];
        }
        cout << minele << '\n';
    }
    return 0;
}