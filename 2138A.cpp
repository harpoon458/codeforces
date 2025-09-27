#include <bits/stdc++.h>
using namespace std;
#define int long long
void ayush(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
pair<int,int> cntzero(int x){
    //{no of zero bits,number remaining}
    if(x==0)return {0,0};
    int counter=0;
    while(x){
        if(x%2)break;
        else counter++;
        x/=2;
    }
    return {counter,x/2};
}
signed main()
{
    ayush();
    int tt;cin>>tt;
    while(tt--){
        int k,x;cin>>k>>x;
        cout<<k-cntzero(x).first<<'\n';
        int cnt=k-cntzero(x).first;
        int i=cntzero(x).second;
        while(i||cnt){
            if(i==0)cout<<1<<' ';
            else if(i){
                cout<<(i%2)+1<<' ';
            }
            i/=2;cnt--;
        }
        cout<<'\n';
    }
    return 0;
}