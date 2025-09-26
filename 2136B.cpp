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
    int t ; cin>>t ;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s ; cin >> s ;
        
        int cont1 = 0 ;
        bool cnt = true ;
        for(auto i : s){
            if( i == '1'){cont1++;}
            else{ cont1 = 0 ;}
            if( cont1 == k ){
                cnt = false;
                break;
            }
        }
        if(cnt){
            int minele = 1 , maxele = n ; 
            vector<int> result(n);
            for(int i = 0 ; i < n ; i++){
                if(s[i] == '0' ){
                    result[i]=maxele;
                    maxele--;
                }
                else{
                    result[i] = minele ; 
                    minele++ ; 
                }
            } 
            cout << "Yes\n";
            for( auto i : result ) cout << i << ' ' ;
            cout << '\n';
        }
        else{ cout << "No\n" ; }
    }
    return 0;
}