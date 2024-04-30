#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <cstdio>
#include <utility>
#include <set>
#include <list>
#include <cmath>
#include <iomanip>
#include <cstdio>
#include <cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for (int i = 0; i < (n); i++)

///////////////////////////////////////
int main() {
    ll x,a,d,n;
    cin >> x >> a >> d >> n;
    ll dis = abs(x-a);
    rep(i , n-1){
        a = a + d;
        if(dis > abs(x-a)){
            dis = abs(x-a);
        }else{
            break;
        }
    }
    cout << dis << endl;

    return 0;
}
