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
        vector<int> arr(n);
        vector<int> pos0; /*optimizes for 0 performance*/
        vector<bool> isthere(n+1,false);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]!=0 && !isthere[arr[i]]) isthere[arr[i]]=true;
            if(arr[i]==0) pos0.push_back(i);
        }
        vector<int> toadd;
        for(int i=n;i>0;i--){if(!isthere[i]) toadd.push_back(i);}
        int k=0;
        /*only access 0's*/
        for(auto i:pos0){
            arr[i] = toadd[k];k++;
        }
        int first = -1, rev = -1;
        for (int i=0; i<n; i++) {
            if (arr[i] != i+1) { first = i; break; }
        }
        for (int j=n-1; j>=0; j--) {
            if (arr[j] != j+1) { rev = j; break; }
        }
        if (first == -1) cout << 0 << '\n';
        else cout << rev - first + 1 << '\n';
    }
    return 0;
}