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
bool compare(pii a, pii b){
    if(a.first == b.first){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main(){
    int n;
    cin >> n;
    vpii p(n);
    rep(i,n){
        cin >> p[i].first >> p[i].second;
    }

    sort(p.begin(),p.end(),compare);


    //debug
    // rep(i,n){
    //     cout << p[i].first << " " << p[i].second << endl;
    // }
    int ans = n*(n-1)/2;
    int add = 0;
    rep(i,n){
        add = 0;
        for(int j = i+1; j < n; j++){
            if(p[i].second < p[j].first){
                add++;
            }else{
                break;
            }
        }
        ans -= add;
    }
    cout << ans << endl;
    return 0;
}
