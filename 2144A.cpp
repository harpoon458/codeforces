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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr(n);
        int sum = 0 ; 
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sum%3 ==0 ? cout<<1<<' '<<2<<'\n' : cout<<0<<' '<<0<<'\n'; 
    }
    return 0;
}