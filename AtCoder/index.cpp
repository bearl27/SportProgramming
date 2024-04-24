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
using vi = vector<int>;
using vvi = vector<vector<int>>;

///////////////////////////////////////

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)cin >> a[i];
    sort(a.begin(), a.end());
    double ans = 0;
    for(auto x : a){
        ans += x;
    }
    ans /= n;
    double s = 0;
    for(auto x : a){
        s += (x - ans) * (x - ans);
    }
    s /= n;
    cout << setprecision(10) << ans << endl;
    cout << fixed << setprecision(10)<< sqrt(s) << endl;
    return 0;
}
