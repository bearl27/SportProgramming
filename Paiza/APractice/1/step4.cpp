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
    int h, w;
    cin >> h >> w;
    char c_vec[h][w];
    rep(i, h)
    {
        string s;
        cin >> s;
        rep(j, w) c_vec[i][j] = s[j];
    }
    rep(y, h)
    {
        rep(x, w) if (y == 0)
        {
            if (c_vec[y+1][x] == '#')
                cout << y << " " << x << endl;
        }
        else if (y == h - 1)
        {
            if (c_vec[y-1][x ] == '#')
                cout << y << " " << x << endl;
        }
        else
        {
            if (c_vec[y+1][x] == '#' && c_vec[y-1][x] == '#')
                cout << y << " " << x << endl;
        }
    }

    return 0;
}
