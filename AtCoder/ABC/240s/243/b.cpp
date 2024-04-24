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
    int cnt = 0;
    int cnt2 = 0;
    vector<int> a;
    vector<int> b;
    rep(i,n){
        int x;
        cin >> x;
        a.push_back(x);
    }
    rep(i,n){
        int x;
        cin >> x;
        b.push_back(x);
    }
    map<int, int> mp;
    rep(i,n){
        if(a[i] == b[i])cnt++;
        mp[a[i]]++;
        mp[b[i]]++;
    }
    for(auto x : mp){
        if(x.second == 2)cnt2++;
    }
    cout << cnt << "\n" << cnt2 - cnt << endl;

    return 0;
}
