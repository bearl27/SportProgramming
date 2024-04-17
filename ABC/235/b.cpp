#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#define _USE_MATH_DEFINES
#include <math.h>
#include <queue>
#include <deque>
#include <stack>
#include <cstdio>
#include <utility>
#include <set>
#include <list>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for(int i = 0; i < (n); i++)

///////////////////////////////////////
int f(int n){
    return n * n + 2 * n + 3;
}

int main()
{   
    ll n;
    cin >> n;
    vector<ll> h(n);
    rep(i, n){
        cin >> h[i];
    }
    ll ans = 0;
    rep(i, n){
        if(h[i] >= h[i+1]){
            ans = h[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}