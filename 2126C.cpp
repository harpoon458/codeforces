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
        vector<int>tower(n);
        for(int i=0;i<n;i++)cin>>tower[i];
        int curr=tower[k-1]; /*getting the first tower before sorting*/
        sort(tower.begin(),tower.end()); /*sorting the array*/
        int level=1;
        bool counter=true;
        int maxtower=tower[n-1];/*max tower height*/
        for(int i=0;i<n;i++){
            if(curr>tower[i]) continue;
            else{
                if(curr==maxtower)break;
                else{
                    if((curr-level+1) >= (tower[i+1]-curr)){
                        level += tower[i+1]-curr;
                        curr = tower[i+1];
                    }
                    else {counter=false;break;}
                }
            }
        }
        counter?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}