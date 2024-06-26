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
    ll n,k,x;
    vector<ll> a;
    ll ans = 0;

    cin>>n>>k>>x;
    rep(i,n){
        ll tmp;
        cin>>tmp;
        a.push_back(tmp);
        ans += tmp;
    }
    if(x == 0){
        cout<<ans<<endl;
        return 0;
    }

    ll cnt = 0;
    rep(i,n){
        cnt += a[i]/x;
    }
    cnt = min(cnt,k);
    ans -= cnt*x;
    k -= cnt;
    rep(i,n){
        a[i] = a[i]%x;
    }
    sort(a.rbegin(),a.rend());
    rep(i,n){
        if(k <= 0){
            break;
        }
        ans -= a[i];
        if(ans < 0){
            ans = 0;
            break;
        }
        k--;
    }
    cout<<ans<<endl;
    return 0;

}