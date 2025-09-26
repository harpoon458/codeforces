#include<bits/stdc++.h>
using namespace std;
void ayush(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
int main(){
    ayush();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        n%4 ? cout<<"Alice\n":cout<<"Bob\n";
    }
    return 0 ;
}