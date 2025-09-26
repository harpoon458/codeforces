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
        int n;cin>>n;long c;cin>>c;  
        vector<long> test(n) ; 
        for(int i = 0 ; i < n ; i++ ){
            cin >> test[i] ;          
        }
    sort(test.rbegin(), test.rend());
    int dbl = 1, result = 0;
    for (int i = 0; i < n; ++i) {
        if (test[i] * dbl > c) result++;
        else dbl *= 2;
    }
 
        cout << result << '\n' ; 
    }
    return 0;
}