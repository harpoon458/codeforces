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
        int a , b , x , y ; cin >> a >> b >> x >> y ;
        long long cost = 0 ;
        if( a-b == 1 ){ /*if a > b then olny possible if a */
            if( a%2 == 1 ){
                cout <<y<<'\n';
            }
            else{
                cout << -1 <<'\n';
            }
        }
        else if( a-b >= 2){ cout << -1 << '\n';} 
        else if( x <= y ){
            cost = (b-a)*x;
            cout << cost << '\n' ;
        }
        else{ /*y > x , so , optimize the code*/
            if( a%2==1 ){
                cost += ((b-a+1)/2)*x + ((b-a)/2)*y ;
                cout << cost << '\n' ; 
            }
            else{
                cost += ((b-a+1)/2)*y + ((b-a)/2)*x ;
                cout << cost <<'\n' ;
            }
        }
 
    }
    return 0;
}