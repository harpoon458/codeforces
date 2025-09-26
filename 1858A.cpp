#include <bits/stdc++.h>
#define ll long long 
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
        ll a , b , c ; cin >> a >> b >> c ;
        if (a + (c + 1) / 2 > b + c / 2){
            cout << "First\n"; // Anna wins
        }
        else{
            cout << "Second\n"; // Katie wins
        }
    }
    return 0;
}