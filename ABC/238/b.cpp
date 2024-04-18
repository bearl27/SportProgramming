#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define _USE_MATH_DEFINES
#include<math.h>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<stdio.h>
#include<string.h>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }
    vector<int> arg(n);
    rep(i, n){
        if(i == 0)arg[i] = a[i];
        else arg[i] = (a[i] + arg[i-1])%360;
        ////////
        //cout << a[i] << " " << arg[i] << endl;
    }
    arg.push_back(360);
    sort(arg.begin(), arg.end());
    int ans = arg[0];
    rep(i,n){
        ////////////
        //cout << ans << endl;
        if(ans < arg[i+1] - arg[i]) ans = arg[i+1] - arg[i];
    }
    cout << ans << endl;
    return 0;
}
