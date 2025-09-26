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
        int n ; cin >> n ; int x ; cin >> x ;
        vector<int> stations = {0};
        for( int i = 0 ; i < n ; i++ ){
            int a ; cin >> a ;
            stations.push_back(a);
        }
        int maxdiff = INT_MIN ;
        for( int i = 1 ; i < n+1 ; i++){
            maxdiff = max(maxdiff,stations[i]-stations[i-1]);
        }
        maxdiff = max(maxdiff,2*(x-stations[n]));
        cout << maxdiff << '\n';
    }
    return 0;
}