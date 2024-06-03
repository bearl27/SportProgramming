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
#include<queue>
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
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, n){
        cin >> a[i];
    }
    // debug
    // rep(i, n){
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    vector<queue<ll>> q(n);
    rep(i, m){
        q[i].push(a[i]);
    }
    for(int i = 1; i < n-m+1; i++){
        q[i] = q[i-1];
        q[i].pop();
        q[i].push(a[i+m-1]);
    }

    // debug
    rep(i, n-m+1){
        cout << "q[" << i << "]: ";
        while(!q[i].empty()){
            cout << q[i].front() << " ";
            q[i].pop();
        }
        cout << endl;
    }


}
