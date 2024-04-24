#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define _USE_MATH_DEFINES
#include<math.h>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<stdio.h>
#include<string.h>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using piii = pair<pii, pii>;

///////////////////////////////////////

int main(void) {
	char a[5];
	for (int i = 0; i < 5; i++)a[i] = 0;
	cin >> a;
	bool same = true;
	bool step = true;
	for (int i = 0; i < 3; i++) {
		if (a[i] != a[i + 1])same = false;
		if (((a[i] + 1) % 10) != (a[i + 1] % 10))step = false;
	}
	if (same || step)cout << "Weak" << endl;
	else cout << "Strong" << endl;
	return 0;
}
