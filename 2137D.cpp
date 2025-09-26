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
        vector<int> b(n),a(n);
        map<int,vector<int>> pos; 
        for(int i=0;i<n;i++){
            cin>>b[i];
            pos[b[i]].push_back(i);
        }
        int rem=n-pos[1].size();
        int ele=1;
        vector<int> pos1=pos[1];
        for(auto i:pos1){
            a[i] = ele;
            ele++;
        }
        bool ifpossible = true ; 
        
    }
    return 0;
}