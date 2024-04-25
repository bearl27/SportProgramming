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
    string s[n],t[n];
    rep(i,n) cin >> s[i] >> t[i];
    map<string,int> mp;
    rep(i,n){
        mp[s[i]]++;
        mp[t[i]]++;
    }
    rep(i,n){
        if(s[i] == t[i] && mp[s[i]] == 2){
            continue;
        }
        if(mp[s[i]] > 1 && mp[t[i]] > 1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
