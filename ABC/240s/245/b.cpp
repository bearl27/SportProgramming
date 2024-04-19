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

signed main(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<=n-1;i++)cin>>a[i];
    for(ll ans=0;ans<=n;ans++){
        bool ok=true;
        for(ll x:a){
            if(x==ans)ok=false;
        }
        if(ok){
            cout<<ans<<endl;
            return 0;
        }
    }
    return 0;
}