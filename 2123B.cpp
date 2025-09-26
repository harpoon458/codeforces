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
        int n,j,k;cin>>n>>j>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){cin>>arr[i];}
        int maxele = *max_element(arr.begin(),arr.end());
        if(k==1){
            if(arr[j-1]==maxele){
                cout<<"Yes\n";
            }
            else{cout<<"No\n";}
        }
        else{
            cout<<"Yes\n";
        }
    }
    return 0;
}