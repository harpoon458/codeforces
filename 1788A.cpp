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
    int t ; cin >> t;
    while(t--){
        int n ; cin >> n ; 
        vector<int> test(n) ;
        int cnt2 = 0 ; 
        for(int i=0;i<n;i++){
            cin >> test[i] ;
            if(test[i] == 2 ) cnt2++ ;
        }
        if(cnt2%2==1) cout << -1 << '\n' ; 
        else{
            int noof2till = 0 ;
            int result =1;
            for(int i = 0 ; i < n ; i++){
                if(test[i]==2){
                    noof2till++;
                    if(noof2till==(cnt2/2)){
                        result = i+1 ; 
                        break ; 
                    }
                }
            }
            cout << result << '\n' ;
        }
    }
    return 0;
}