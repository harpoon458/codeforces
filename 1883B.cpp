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
        string s;cin>>s;
        map<char,int> freq;
        for(int i=0;i<n;i++) freq[s[i]]++;    
        int oddpos=0;
        for(auto x:freq){if(x.second%2)oddpos++;}
        oddpos-k<=1 ? cout<< "YES\n" : cout<<"NO\n";
    }
    return 0;
}