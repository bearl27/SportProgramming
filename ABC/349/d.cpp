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

///////////////////////////////////////
ll f(ll x,ll l){
    ll num2 = 1;
    while(x % 2 == 0){
        if(num2*2*(x/2+1) > l)break;
        num2 *= 2;
        x /= 2;
    }
    //cout << x << " " << num2 << endl;
    return num2*(x+1);
}

int main(){
    ll l,r;
    cin >> l >> r;
    pll p;
    vpll v;
    ll current = l;
    while(current < r){
        p.first = current;
        current = f(current,r);
        p.second = current;
        v.push_back(p);
    }
    cout << v.size() << endl;
    for(auto p : v){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
