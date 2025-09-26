#include <bits/stdc++.h>
#define ll long long
using namespace std;
void ayush(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
int main()
{
    ayush();
    int t ; 
    cin >> t ;
    while (t--)
    {
        ll n , a , b ; cin >> n >> a >> b ;
        
        if(a<=b){
            (n-b)%2 ? cout << "No\n" : cout << "Yes\n" ; 
        }
        else{
            if((n-b)%2==0&&(a-b)%2==0){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }
    
    return 0;
}