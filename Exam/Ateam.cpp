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

// 比較関数
bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first < b.first)
    {
        return true;
    }
    else if (a.first > b.first)
    {
        return false;
    }
    else
    {
        if (a.second < b.second)
        {
            return true;
        }
        else if (a.second > b.second)
        {
            return false;
        }
        else
        {
            return false;
        }
    }
}

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

        sort(box1.begin(), box1.end(), compare);
        sort(box2.begin(), box2.end(), compare);

        //デバック
        // rep(i, 4)
        // {
        //     cout << box1[i].first << " " << box1[i].second  << endl;
        // }
        // rep(i, 4)
        // {
        //     cout << box2[i].first << " " << box2[i].second << endl;
        // }


        // 衝突判定
        bool collision = false;
        bool map[100][100] = {false};
        // box1の範囲をマップに反映
        rep(i, 100)
        {
            rep(j, 100)
            {
                if ((box1[0].first <= j && j <= box1[2].first) && (box1[0].second <= i && i <= box1[1].second))
                {
                    map[i][j] = true;
                }
            }
        }
        // box2の範囲をマップに反映
        rep(i, 100)
        {
            rep(j, 100)
            {
                if ((box2[0].first <= j && j <= box2[2].first) && (box2[0].second <= i && i <= box2[1].second))
                {
                    if (map[i][j])
                    {
                        collision = true;
                        break;
                    }
                }
            }
        }

        //包含する場合
        //box1がbox2に包含される場合
        if (box1[0].first < box2[0].first && box1[0].second < box2[0].second && box1[2].first > box2[2].first && box1[2].second > box2[2].second)
        {
            cout << "FALSE" << endl;
            return 0;
        }
        //box2がbox1に包含される場合
        if (box2[0].first < box1[0].first && box2[0].second < box1[0].second && box2[2].first > box1[2].first && box2[2].second > box1[2].second)
        {
            cout << "FALSE" << endl;
            return 0;
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