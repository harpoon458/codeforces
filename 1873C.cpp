#include <bits/stdc++.h>
using namespace std;
 
void ayush(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int main()
{
    ayush();
    int t;
    cin >> t;
    while(t--){
        vector<string> grid(10);
        int score = 0;
        for(int i = 0; i < 10; i++){
            cin >> grid[i];
            for(int j = 0; j < 10; j++){
                if(grid[i][j] == 'X'){
                    score += 1+min(min(i,9-i),min(j,9-j));
                }
            }
        }
        cout << score << '\n';
    }
    return 0;
}