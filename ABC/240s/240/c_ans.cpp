#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //入力
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i] >> b[i];
    }

    //DP（動的計画法)
    //数字を扱って残りの数を示すのではなくのではなく，その数字に飛ぶということをvectorの位置で表現する
    //すると，数字のかぶりがなくなる 2^nからn*xになる
    vector dp(n + 1, vector(x + 1, false));
    dp[0][0] = true;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= x; ++j)
        {
            if (dp[i][j])
            {
                if (j + a[i] <= x)
                {
                    dp[i + 1][j + a[i]] = true;
                }
                if (j + b[i] <= x)
                {
                    dp[i + 1][j + b[i]] = true;
                }
            }
        }
    }

    //出力
    cout << (dp[n][x] ? "Yes" : "No") << '\n';
}