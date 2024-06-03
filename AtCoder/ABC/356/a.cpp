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
    int n,l,r;
    cin >> n >> l >> r;
    l--; r--;
    int a[n];
    rep(i,n) a[i] = i+1;
    sort(a+l,a+r+1,greater<int>());
    rep(i,n) cout << a[i] << " ";
    cout << endl;

    return 0;
}
