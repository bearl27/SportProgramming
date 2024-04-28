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
#define rep1(i, n) for (int i = 1; i <= (n); i++)
///////////////////////////////////////

int main()
{
    int n, q;
    cin >> n >> q;
    int balls[n + 1];
    rep1(i, n)
    {
        balls[i] = i;
    }
    int swap_num[q + 1];
    rep1(i, q)
    {
        cin >> swap_num[i];
    }
    rep1(i, q)
    {
        rep1(j, n)
        {
            if (balls[j] == swap_num[i])
            {
                if (j < n)
                {
                    swap(balls[j], balls[j + 1]);
                    //cout << "Yes" << endl;
                    break;
                }
                else
                {
                    swap(balls[j], balls[j - 1]);
                    //cout << "Yes" << endl;
                    break;
                }
            }
        }
        ////
        // rep1(k,n){
        //     cout << balls[k];
        //     if(k != n){
        //         cout << " ";
        //     }
        // }
        // cout << endl;
    }
    rep1(i, n)
    {
        cout << balls[i];
        if (i != n)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
