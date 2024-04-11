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

string fix(int x)
{
    if (x < 10){
        return string{'0'} + to_string(x);
    }else{
        return to_string(x);
    }
}

int main(){
    int X;
    cin >> X;
    int H = X < 60 ? 21 : 22;
    int M = X % 60;
    cout << H << ':' << fix(M) << '\n';

    return 0;
}
