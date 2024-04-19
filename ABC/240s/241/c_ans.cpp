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
#define rep(i, n) for (int i = 0; i < (n); i++)

///////////////////////////////////////

int main(void) {
	int n, cnt;
	bool ans = false;
	vector<string>a;
	string str;

    //入力
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> str;
		a.push_back(str);
	}

    //２個同時##
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
            //＃＃＃＃
			if ((i + 5) < n) {
				cnt = 0;
				for (int k = 0; k < 6; k++)if (a[i + k][j] == '#')cnt++;
				if (cnt >= 4)ans = true;
			}
            //・・＃・
            //・・＃・
			if ((j + 5) < n) {
				cnt = 0;
				for (int k = 0; k < 6; k++)if (a[i][j + k] == '#')cnt++;
				if (cnt >= 4)ans = true;
			}
            //・＃・・
            //・・＃・
			if (((i + 5) < n) && ((j + 5) < n)) {
				cnt = 0;
				for (int k = 0; k < 6; k++)if (a[i + k][j + k] == '#')cnt++;
				if (cnt >= 4)ans = true;
			}
            //・・・＃
            //・・＃・
			if ((0 <= (i - 5)) && ((j + 5) < n)) {
				cnt = 0;
				for (int k = 0; k < 6; k++)if (a[i - k][j + k] == '#')cnt++;
				if (cnt >= 4)ans = true;
			}
		}
	}

	if (ans)cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

