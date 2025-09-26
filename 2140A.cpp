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
        int n ; cin>>n ; 
        string s ; cin>>s ;
        int cnt0 = 0 ; 
        for(auto i : s){
            if(i=='0')cnt0++;
        } 
        int result = 0 ; 
        for(int i = 0 ; i < cnt0 ; i++ ){
            if(s[i]=='1')result++;
        } 
        cout<<result<<'\n';
    }
    return 0;
}