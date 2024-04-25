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


const int MOD = 998244353;

int main()
{
    int n, m, K;
    cin >> n >> m >> K;

    vector<vector<ll>> dp(n + 1, vector<ll>(K + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < K; j++)
        {
            for (int k = 1; k <= m; k++)
            {
                if (j + k <= K)
                {
                    dp[i + 1][j + k] = (dp[i + 1][j + k] + dp[i][j]) % MOD;
                }
            }
        }
    }

    ll res = 0;
    for (int i = 1; i <= K; i++)
    {
        res = (res + dp.back()[i]) % MOD;
    }

    cout << res << endl;
}