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
    int H[3],W[3];
    rep(i,3)cin >> H[i];
    rep(i,3)cin >> W[i];
    int cnt = 0;
    rep1(a,H[0]){
        rep1(b,H[0]-1){
            rep1(d,H[1]){
                rep1(e,H[1]-d){
                    int c = H[0]-a-b;
                    int f = H[1]-d-e;
                    int g = W[0]-a-d;
                    int h = W[1]-b-e;
                    int i = H[2]-g-h;
                    if(c>0 && f>0 && g>0 && h>0&& i>0&&W[2] == c+f+i)cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
