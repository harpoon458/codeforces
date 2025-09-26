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
        int n,m;cin>>n>>m;
        vector<pair<int,int>> req(n);
        int point=m;
        bool f1=true,f2=false;
        for(int i=0;i<n;i++){
            cin>>req[i].first>>req[i].second;
            bool case1=((req[i].first%2)!=(req[i].second))&&f1;
            bool case2=((req[i].first%2)==(req[i].second))&&f2;
            if(case1||case2){
                point--;
                swap(f1,f2);
            }  
        }
        cout<<point<<'\n';
    }
    return 0;
}