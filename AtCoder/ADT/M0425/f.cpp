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
#define rep1(i, n) for(int i = 1; i <= (n); i++)

///////////////////////////////////////

int main(){
    int H[3],W[3];
    rep(i,3) cin >> H[i];
    rep(i,3) cin >> W[i];
    int ans = 0;
    rep1(a,30){
        rep1(b,30){
            rep1(d,30){
                rep1(e,30){
                    int c = H[0] - a - b;
                    int f = H[1] - d - e;
                    int g = W[0] - a - d;
                    int h = W[1] - b - e;
                    int i = W[2] - c - f;
                    if (min({c, f, g, h, i}) > 0 && g + h + i == H[2]) ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
