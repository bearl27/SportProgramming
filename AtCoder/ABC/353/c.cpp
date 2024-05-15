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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    ll ans = 0;
    rep(i,n){
        a[i] %= 100000000;
        ans += a[i]*n-1;
    }
    int cnt = 0;
    rep(i,n){
        for(int j = i+1; j < n; j++){

            if(a[i] + a[j] >= 100000000){
                cnt++;
            }
            //debug
            cout << a[i] << " " << a[j] << " "<< (a[i] + a[j]) % 100000000 << cnt <<endl;
        }
    }
    ans -= 100000000*cnt;

    cout << ans << endl;
    return 0;

}