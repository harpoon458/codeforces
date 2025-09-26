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
        int cnt1=0,cnt_1=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                cnt1++;
            }
            else{
                cnt_1++;
            }
        }
        int result = 0 ;
        while(cnt1<cnt_1 || cnt_1%2==1){
            result++;
            cnt1++;
            cnt_1--;
        }
        cout<<result<<'\n';
    }
    return 0;
}