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
bool compare(pii a, pii b){
    return a.first+a.second > b.first+b.second;
}

int main(){
    int n,x;
    cin >> n >> x;
    pii a[n];
    rep(i, n){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n,compare);
    ///////////////
    // rep(i, n){
    //     cout << a[i].first << " " << a[i].second << endl;
    // }
    vector<int>current;
    vector<int>next;
    current.push_back(x);
    for(int i = 0; i < n; i++){
        for(int num:current){
            if(num - a[i].first >= 0){
                next.push_back(num - a[i].first);
            }
            if(num - a[i].second >= 0){
                next.push_back(num - a[i].second);
            }
            if(next.empty()){
                cout << "No" << endl;
                return 0;
            }
        }
        current = next;
        next.clear();
    }
    for(int num:current){
        if(num == 0){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
