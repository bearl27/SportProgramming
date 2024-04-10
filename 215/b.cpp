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
    long long n;
    cin >> n;
    long long val = 1;
    for (long long i = 0; i <= 60; i++)
    {
        if (val > n)
        {
            cout << i - 1 << '\n';
            break;
        }
        val *= 2;
    }
    return 0;
}
