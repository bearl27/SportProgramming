#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <cstdio>
#include <utility>
#include <set>
#include <list>
#include <cmath>
#include <iomanip>
#include <cstdio>
#include <cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for (int i = 0; i < (n); i++)

///////////////////////////////////////

int main()
{
    int n;
    cin >> n;
    int A[2*n];
    map<int, int> place;
    ll ans = 0;
    rep(i, 2*n){
        cin >> A[i];
        if(place[A[i]] == 0){
            place[A[i]] = i+1;
        }else{
            ans += i - place[A[i]];
        }
    }
    cout << ans << endl;

    return 0;
}
