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
        vector<int> arr(n) ;
        int result = 0 , counter = 0 ;
        for(int i = 0 ; i < n ; i++ ){
            cin>>arr[i];
            if(arr[i]==1){
                result = max(result,counter);
                counter = 0 ;
            }
            else{
                counter++;
            }
        }
        result = max(result,counter);
        cout<<result<<'\n';
    } 
    return 0;
}