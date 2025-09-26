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
    int t ; cin >> t;
    while(t--){
        int n ; cin >> n ; 
        int mindiff = INT_MAX ;
        vector<long long> arr(n);
        for(int i = 0 ; i < n ; i++ ){
            cin>>arr[i];
            if(i!=0){
                int currdiff = arr[i]-arr[i-1];
                mindiff = min(mindiff,currdiff);
            }
        }
        if(mindiff < 0 ) cout << 0 << '\n' ; 
        else cout << (mindiff/2)+1 << '\n' ;
    }
    return 0;
}