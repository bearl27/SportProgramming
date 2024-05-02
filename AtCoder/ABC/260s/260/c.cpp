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
    int n, x, y;
    cin >> n >> x >> y;
    ll red = 1, blue = 0;

    //do
    rep(i,n-1){
        blue += x*red;
        red = blue + red;
        blue = blue*y;

        //debug
        //cout << n-i-1 << ":" << red << " " << blue << endl;
    }

    //out
    cout << blue << endl;

    return 0;
}
