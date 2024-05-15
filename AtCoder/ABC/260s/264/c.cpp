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

int main(void)
{
    //in
    int h1, h2, w1, w2;
    int a[15][15], b[15][15];

    cin >> h1 >> w1;
    for (int i = 1; i <= h1; i++)
        for (int j = 1; j <= w1; j++)
            cin >> a[i][j];
    cin >> h2 >> w2;
    for (int i = 1; i <= h2; i++)
        for (int j = 1; j <= w2; j++)
            cin >> b[i][j];

    //do
    for (int i = 0; i < (1 << h1); i++)
    {
        for (int j = 0; j < (1 << w1); j++)
        {

            vector<int> hvec, wvec;
            for (int k = 1; k <= h1; k++)
                if ((i & (1 << (k - 1))) == 0)
                    hvec.push_back(k);
            for (int k = 1; k <= w1; k++)
                if ((j & (1 << (k - 1))) == 0)
                    wvec.push_back(k);
            if (hvec.size() != h2 || wvec.size() != w2)
                continue;

            bool match = true;
            for (int k = 1; k <= h2; k++)
            {
                for (int l = 1; l <= w2; l++)
                {
                    if (a[hvec[k - 1]][wvec[l - 1]] != b[k][l])
                    {
                        match = false;
                        break;
                    }
                }
            }
            if (match)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    //out
    cout << "No" << endl;
    return 0;
}