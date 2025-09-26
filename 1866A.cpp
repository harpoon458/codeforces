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
    int n ; cin >> n ;
    vector<int> arr(n);
    int absminele = INT_MAX ; 
    for( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
        absminele = min(abs(arr[i]),absminele);
    }
    cout << absminele ;
    return 0;
}