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
    int w,h;
    cin >> w >> h;
    vector<string> grid(h);
    rep(i,h){
        cin >> grid[i];
    }

    //do
    int x = 0, y = 0;

    //debug
    //int cnt = 0;
    while(true){

//debug
        // cout << grid[y][x] << endl;
        // cout << x << " " << y << endl;

        if(grid[y][x] == 'U'){
            y--;
            if(y < 0){
                y = 0;
                break;
            }
        }else if(grid[y][x] == 'D'){
            y++;
            if(y > h){
                y = h;
                break;
            }
        }else if(grid[y][x] == 'R'){
            x++;
            if(x > w){
                x = w;
                break;
            }
        }else if(grid[y][x] == 'L'){
            x--;
            if(x < 0){
                x = 0;
                break;
            }
        }
    }

    //out
    cout << y+1 << " " << x+1 << endl;
    return 0;

}