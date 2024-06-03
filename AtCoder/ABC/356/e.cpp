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
    int n;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }
    vector<int> max;
    vector<int> min;
    for (int bit = 0; bit < (1 << n); bit++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) {
                subset.push_back(a[i]);
            }
        }
        if(subset.size() <= 1){
            continue;
        }else{
            
        }
    }

    return 0;
}
