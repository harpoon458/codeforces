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
        int n,k;cin>>n>>k;
        vector<int> b(n);
        bool found = false ; 
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==k) found = true ; 
        }
        found ? cout << "Yes\n" : cout << "No\n" ; 
    }
    return 0;
}