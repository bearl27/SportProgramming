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
int diff(const vector<int> &vec)
{
    auto firstNonZero = find_if(vec.begin(), vec.end(), [](int num)
                                { return num != 0; });

    auto lastNonZero = find_if(vec.rbegin(), vec.rend(), [](int num)
                               { return num != 0; });

    return firstNonZero - lastNonZero;
}

int main()
{
    int q;
    cin >> q;
    multiset<int> st;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        else if (t == 2)
        {
            int x, c;
            cin >> x >> c;
            while (c-- and st.find(x) != st.end())
            {
                st.erase(st.find(x));
            }
        }
        else
        {
            cout << *st.rbegin() - *st.begin() << endl;
        }
    }
}
