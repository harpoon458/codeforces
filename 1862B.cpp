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
    while ((t--))
    {
        int m;cin>>m;
        vector<int> arr(m);
        vector<int> result;
        for(int i=0;i<m;i++){
            cin>>arr[i];
            if(i==0) result.push_back(arr[0]);
            else{
                if(arr[i]>=arr[i-1]) result.push_back(arr[i]);
                else{
                    result.push_back(arr[i]);
                    result.push_back(arr[i]);
                }
            }
        }
        cout<<result.size()<<'\n';
        for(auto i:result) cout<<i <<' ';
        cout<<'\n'; 
    }
    
    return 0;
}