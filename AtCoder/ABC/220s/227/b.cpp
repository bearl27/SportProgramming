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
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using vi = vector<int>;
using vvi = vector<vector<int>>;

///////////////////////////////////////
int s_culc(int a,int b)
{
    int s1 = 3*a;
    int s2 = 3*b;
    int s3 = 4*a * b;
    return s1 + s2 + s3;
}

int main(void)
{
    int n;
    cin >> n;
    int ans = 0;
    bool flag = false;
    for(int i = 0; i < n; i++){
        int s;
        cin >> s;
        flag = false;
        for(int a=1; 3 * a <= s; a++){
            for(int b=1; 3 * b <= s; b++){
                if(s_culc(a,b) == s){
                    ans++;
                    flag = true;
                    break;
                }
            }
            if(flag){
                    break;
            }
        }
    }

    cout << n - ans << endl;

    return 0;
}