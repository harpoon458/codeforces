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
        int n ; cin >> n;
        vector<int> arr(n) ;
        for(int i = 0 ; i < n ; i++ ){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        vector <int> noofvalues = {1} ;
        int curridx = 0;
        for( int i = 1 ; i < n ; i++ ){
            if( arr[i] != arr[i-1]){
                curridx++;
                noofvalues.push_back(1) ; 
            }
            else{
                noofvalues[curridx]++ ; 
            }
        }
        if( noofvalues.size() > 2 ){
            cout<<"No"<<'\n';
        }
        else{
            if( noofvalues.size()==2 && (abs(noofvalues[1]-noofvalues[0]) <= 1) ){
                cout<<"Yes"<<'\n';
            }
            else if( noofvalues.size()==1 ){
                cout << "Yes" << '\n' ;
            }
            else{
                cout << "No" << '\n' ;
            }
        }
    }
    return 0;
}