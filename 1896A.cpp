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
        vector<int> permutation(n);
        int minele = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            cin>>permutation[i];
            minele = min(minele,permutation[i]);
        }
        permutation[0] == minele ? cout << "YES" : cout << "NO" ;
        cout << '\n';
    }
    return 0;
}