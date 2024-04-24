#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#define _USE_MATH_DEFINES
#include <math.h>
#include <queue>
#include <deque>
#include <stack>
#include <cstdio>
#include <utility>
#include <set>
#include <list>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
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
    int n, m;
    cin >> n >> m;
    map<ll, int> a;
    ll b;
    rep(i, n)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    rep(i, m)
    {
        cin >> b;
        if (a[b] == 0)
        {
            cout << "No" << endl;
            return 0;
        }
        else
        {
            a[b]--;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
