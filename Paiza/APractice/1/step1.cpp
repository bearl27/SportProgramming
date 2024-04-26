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
    cin >> h >> w >> n;
    
    char c_vec[h][w];
    rep(i, h) {
        string s;
        cin >> s;
        rep(j,w)c_vec[i][j] = s[j];
    }
    rep(i, n){
        int y,x;
        cin >> y >> x;
        cout << c_vec[y][x] << endl;
    }
    

    return 0;
}
