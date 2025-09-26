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
        int x ; cin >> x ;
        int mindigit = 10 ; 
        while(x)
        {
            int digit = x%10;
            mindigit=min(mindigit,digit);
            x/=10;
        }
        cout << mindigit <<'\n' ; 
    }
    return 0;
}