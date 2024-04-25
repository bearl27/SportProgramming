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

///////////////////////////////////////

int main(){
    int h,w,n;
    char direction = 'T';//T:top, B:bottom, L:left, R:right
    cin >> h >> w >> n;
    bool grid[100][100] = {false};//false: white, true: black
    int x = 0, y = 0;
    rep(i,n){
        if(!grid[x][y]){//white
            grid[x][y] = true;
            if(direction == 'T'){
                direction = 'R';
                if(y < w-1){
                    y++;
                }else{
                    y = 0;
                }
            }else if(direction == 'B'){
                direction = 'L';
                if(y > 0){
                    y--;
                }else{
                    y = w-1;
                }
            }else if(direction == 'L'){
                direction = 'T';
                if(x > 0){
                    x--;
                }else{
                    x = h-1;
                }
            }else if(direction == 'R'){
                direction = 'B';
                if(x < h-1){
                    x++;
                }else{
                    x = 0;
                }
            }
        }else{//black
            grid[x][y] = false;
            if(direction == 'T'){
                direction = 'L';
                if(y > 0){
                    y--;
                }else{
                    y = w-1;
                }
            }else if(direction == 'B'){
                direction = 'R';
                if(y < w-1){
                    y++;
                }else{
                    y = 0;
                }
            }else if(direction == 'L'){
                direction = 'B';
                if(x < h-1){
                    x++;
                }else{
                    x = 0;
                }
            }else if(direction == 'R'){
                direction = 'T';
                if(x > 0){
                    x--;
                }else{
                    x = h-1;
                }
            }
        }
    }
    rep(i,h){
        rep(j,w){
            if(grid[i][j]){
                cout << '#';
            }else{
                cout << '.';
            }
        }
        cout << endl;
    }


    return 0;
}
