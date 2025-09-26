#include <bits/stdc++.h>
using namespace std;
void ayush(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
int normalize(int n, int k){
    return min(n%k,k - n%k);
}
int main()
{
    ayush();
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> s(n) , nrs(n); // normalize remainder of elemnents, useful for comparision
        vector<int> t(n) , nrt(n);
        for(int i=0;i<n;i++){cin>>s[i];nrs[i]=normalize(s[i],k);}
        for(int i=0;i<n;i++){cin>>t[i];nrt[i]=normalize(t[i],k);}
        //normalize remainder is used for optimization
        sort(nrs.begin(),nrs.end());
        sort(nrt.begin(),nrt.end());
        nrs == nrt ? cout << "Yes\n" : cout << "No\n" ;  
    }
    return 0;
}