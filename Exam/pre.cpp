#include <sstream>
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

int main(int argc, char *argv[])
{
    // このコードは標準入力と標準出力を用いたサンプルコードです。
    // このコードは好きなように編集・削除してもらって構いません。
    // ---
    // This is a sample code to use stdin and stdout.
    // Edit and remove this code as you like.

    string line;
    int index = 1;

    while (!cin.eof())
    {
        getline(cin, line);
        istringstream iss(line); // 文字列をストリームとして扱うためのistringstreamを作成

        vpii box1, box2; // x座標とy座標の組み合わせを格納するためのvector

        int x, y;
        int cnt = 0;
        while (iss >> x >> y) // スペースで分割されたx座標とy座標の組み合わせを取得
        {
            if (cnt < 4)
                box1.push_back(make_pair(x, y)); // 組み合わせをvectorに追加
            else
                box2.push_back(make_pair(x, y)); // 組み合わせをvectorに追加
            cnt++;
        }

        // デバック
        // rep(i, 4)
        // {
        //     cout << i << ":" << box1[i].first << " " << box1[i].second;
        // }
        // cout << endl;
        // rep(i, 4)
        // {
        //     cout << i << ":" << box2[i].first << " " << box2[i].second;
        // }

        // 衝突判定
        bool collision = false;
        bool map[100][100] = {false};
        // box1の範囲をマップに反映
        rep(x, 100)
        {
            rep(y, 100)
            {
                // 上辺
                if ((box1[3].first <= x && x <= box1[0].first) && (box1[0].second == y))
                {
                    map[y][x] = true;
                }
                // 下辺
                if ((box1[2].first <= x && x <= box1[1].first) && (box1[2].second == y))
                {
                    map[y][x] = true;
                }
                // 右辺
                if ((box1[1].second <= y && y <= box1[0].second) && (box1[0].first == x))
                {
                    map[y][x] = true;
                }
                // 左辺
                if ((box1[2].second <= y && y <= box1[3].second) && (box1[2].first == x))
                {
                    map[y][x] = true;
                }
            }
        }
        // box2の範囲をマップに反映
        rep(x, 100)
        {
            rep(y, 100)
            {
                // 上辺
                if ((box2[3].first <= x && x <= box2[0].first) && (box2[0].second == y))
                {
                    if (map[y][x])
                    {
                        collision = true;
                        break;
                    }
                }
                // 下辺
                if ((box2[2].first <= x && x <= box2[1].first) && (box2[2].second == y))
                {
                    if (map[y][x])
                    {
                        collision = true;
                        break;
                    }
                }
                // 右辺
                if ((box2[1].second <= y && y <= box2[0].second) && (box2[0].first == x))
                {
                    if (map[y][x])
                    {
                        collision = true;
                        break;
                    }
                }
                // 左辺
                if ((box2[2].second <= y && y <= box2[3].second) && (box2[2].first == x))
                {
                    if (map[y][x])
                    {
                        collision = true;
                        break;
                    }
                }
            }
        }
        if (collision)
        {
            cout << "TRUE" << endl;
        }
        else
        {
            cout << "FALSE" << endl;
        }
        return 0;
    }
    return 0;
}