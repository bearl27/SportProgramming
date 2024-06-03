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
#include<queue>
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
    int n,m;
    cin >> n >> m;
    vector<vector<char>> field(n, vector<char>(m));
    rep(i,n){
        rep(j,m){
            cin >> field[i][j];
        }
    }
    queue<pii> lake;
    int ans = 0;
    rep(i,n){
        rep(j,m){
            if(field[i][j] == 'W'){
                ans++;
                lake.push(make_pair(i,j));
                while(!lake.empty()){
                    auto p = lake.front();
                    lake.pop();
                    int x = p.first;
                    int y = p.second;
                    if(x < 0 || x >= n || y < 0 || y >= m || field[x][y] == '.') continue;
                    field[x][y] = '.';
                    for(int dx = -1; dx <= 1; dx++){
                        for(int dy = -1; dy <= 1; dy++){
                            lake.push(make_pair(x+dx, y+dy));
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
