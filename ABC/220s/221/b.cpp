#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#define _USE_MATH_DEFINES
#include <math.h>
#include <queue>
#include <deque>
#include <stack>
#include <cstdio>
#include <utility>
#include <set>
#include <list>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;

///////////////////////////////////////

int main()
{
    string S, T;
    cin >> S >> T;
    string ans = "No";
    if (S == T)ans = "Yes";
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != T[i])
        {
            if (0 < i)
            {
                swap(S[i - 1], S[i]);
                if (S == T)ans = "Yes";
                swap(S[i - 1], S[i]);
            }
            if (i + 1 < S.size())
            {
                swap(S[i], S[i + 1]);
                if (S == T)
                    ans = "Yes";
                swap(S[i], S[i + 1]);
            }
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
