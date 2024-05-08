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
    rep1(i,n){
        cin >> a[i];
    }
    //solve
    vector<int> dp(n);
    rep1(i,n){
        dp[i]=dp[a[i]-1]+1;
    }
    cout << dp[n-1] << endl;
    return 0;
}