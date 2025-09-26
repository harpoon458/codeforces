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
        int n;cin>>n;
        int result = 9*(floor(log10(n)))+(n/(pow(10,floor(log10(n)))));
        cout<<result<<'\n';
    }
    return 0;
}