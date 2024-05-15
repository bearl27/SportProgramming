#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<iomanip>
#include<cstdio>
#include<cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i,n) for(int i = 1; i < (n); i++)

///////////////////////////////////////

int main(){
    //in
    int r,c;
    cin >> r >> c;
    const int vecsize = 15;
    vector<vector<bool>> grid{vecsize,vector<bool>(vecsize,false)};
    bool white = true;
    for(int cnt = 1; cnt <= vecsize/2; cnt++){
        for(int i = cnt; i < vecsize - cnt; i++){
            for(int j = cnt; j < vecsize - cnt; j++){
                grid[i][j] = white;
            }
        }
        white = !white;
    }
    //debug
    // for(int i = 0; i < vecsize; i++){
    //     for(int j = 0; j < vecsize; j++){
    //         if(grid[i][j]) cout << "o";
    //         else cout << "x";
    //     }
    //     cout << endl;
    // }
    //out
    if(grid[r-1][c-1]) cout << "white" << endl;
    else cout << "black" << endl;
    return 0;

}