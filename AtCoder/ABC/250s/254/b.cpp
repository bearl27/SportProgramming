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
    int n;
    cin >> n;
    vector<int> A, B;

    rep(i, n)
    {
        if (i == 0)
        {
            cout << 1 << endl;
            B.push_back(1);
        }
        else
        {
            A.push_back(1);
            rep(j, i - 1)
            {
                A.push_back(B[j] + B[j + 1]);
            }
            A.push_back(1);
            rep(k, i + 1)
            {
                cout << A[k];
                if (k < i)
                    cout << " ";
                else
                    cout << endl;
            }
            B = A;
            A.clear();
        }
    }
}
