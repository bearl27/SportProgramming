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
#define rep1(i, n) for (int i = 1; i < (n); i++)

///////////////////////////////////////

int main()
{
    string s, t;
    cin >> s >> t;

    if (s == t) {
        cout << 0 << endl;
        return 0;
    }

    if (s.size() != t.size()) {
        cout << min(s.size(), t.size()) + 1 << endl;
        return 0;
    }

    size_t cnt = 0;
    for (cnt = 0; cnt < s.size(); ++cnt) {
        if (s[cnt] != t[cnt]) {
            break;
        }
    }

    cout << cnt+1 << endl;
    return 0;
}