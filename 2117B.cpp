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
        vector<int> p(n);
        int i=0,j=n-1;
        int element=1; 
        while(j>=i){
            if(i!=j){
                p[i]=element;
                p[j]=element+1;
                element += 2;
            }
            else{p[j]=element;}
            i++;j--;
        }
        for(auto i:p) cout<<i<<' ';
        cout<<'\n';
    }
    return 0;
}