#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<iomanip>
#include<cstdio>
#include<cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for(int i = 0; i < (n); i++)

///////////////////////////////////////
int main(void) {
	int n;
	string s[100];
	int cnt[10][10];
	int ans, mx;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)cnt[i][j] = 0;
	}

	cin >> n;
	for (int i = 0; i < n; i++)cin >> s[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			cnt[(s[i][j] - '0')][j]++;
		}
	}

	ans = 1000;
	for (int i = 0; i < 10; i++) {
		mx = 0;
		for (int j = 0; j < 10; j++) {
			mx = max(mx, 10 * (cnt[i][j] - 1) + j);
		}
		ans = min(ans, mx);
	}

	cout << ans << endl;

	return 0;
}

