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
#define FOR(i, a, b) for (ll i = (a); i <= (b); i++)
#define REP(i, n) FOR(i, 0, n - 1)
#define NREP(i, n) FOR(i, 1, n)
using ll = long long;
using pii = pair<int, int>;
using piii = pair<pii, pii>;

///////////////////////////////////////

int main(){
    int n;
    cin >> n;
    int a;
    vector<pair<int,int>> v;
    REP(i,n){
        cin >> a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    cout << v[1].second << endl;
    // REP(i,n){
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
    return 0;
}
