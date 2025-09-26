#include <bits/stdc++.h>
using namespace std;
 
void ayush(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int main(){
    ayush();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> field(n);
        long long evenfields = 0; 
        vector<long long> oddfield; 
 
        for(int i=0;i<n;i++){
            cin >> field[i];
            if(field[i] % 2 == 0) evenfields += field[i];
            else oddfield.push_back(field[i]);
        }
 
        if(oddfield.empty()){
            cout << 0 << '\n';
            continue;
        }
 
        sort(oddfield.begin(), oddfield.end());
        int m = oddfield.size();
        long long oddsum = 0;
 
        // take all large odds, and also include the middle when m is odd
        for(int i=m-1;i>=m/2;i--){
            oddsum += oddfield[i];
        }
 
        cout << evenfields + oddsum << '\n';
    }
    return 0;
}