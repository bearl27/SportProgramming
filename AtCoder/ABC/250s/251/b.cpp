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

///////////////////////////////////////

int main(){
    int n,w;
    cin >> n >> w;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }
    vector<bool> goodNum(w+1, false);
    //
    rep(i, n){
        if(a[i] <= w){
            goodNum[a[i]] = true;
        }
    }
    rep(i, n){
        for(int j = i+1; j < n; j++){
            if(a[i] + a[j] <= w){
                goodNum[a[i] + a[j]] = true;
            }
        }
    }

    rep(i, n){
        for(int j = i+1; j < n; j++){
            for(int k = j+1;k < n; k++){
                if(a[i] + a[j] + a[k] <= w){
                    goodNum[a[i] + a[j] + a[k]] = true;
                }
            }
        }
    }
    int ans = 0;
    for(auto flag: goodNum){
        if(flag){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
