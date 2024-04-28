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
    int a[2] = {0}; // aのサイズを指定して初期化
    int b[2] = {0}; // bのサイズを指定して初期化
    int cnt = 0;
    vector<string> str(h); // 可変長の文字列配列を宣言

    rep(i, h)
    {
        cin >> str[i];
    }

    rep(i, h)
    {
        rep(j, w)
        {
            if (str[i][j] == 'o')
            {
                if (cnt == 0)
                {
                    a[0] = i;
                    a[1] = j;
                    cnt++;
                    //cout << "Yes";
                }
                else
                {
                    b[0] = i;
                    b[1] = j;
                    //cout << "yes";
                    break;
                }
            }
        }
    }

    int ans = abs(a[0] - b[0]) + abs(a[1] - b[1]);
    //cout << a[0] << " " << a[1] << endl;
    //cout << b[0] << " " << b[1] << endl;
    cout << ans << endl;

    return 0;
}