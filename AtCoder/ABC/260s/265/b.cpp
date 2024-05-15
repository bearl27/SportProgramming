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
    ll n,m,t;
    cin >> n >> m >> t;
    vector<ll> costs(n);
    rep(i,n-1) cin >> costs[i];
    vector<ll> points(n,0);
    rep(i,m){
        ll a,b;
        cin >> a >> b;
        points[a-1] = b;
    }

    // //debug
    // rep(i,n-1) cout << costs[i] << " ";
    // cout << endl;
    // rep(i,n) cout << points[i] << " ";
    // cout << endl;

    //do
    ll now = t;
    rep(i,n-1){
        now += points[i];

        // //debug
        // cout << now << endl;

        now -= costs[i];
        if(now <= 0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;

}