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
int main() {

	int N,K;
	cin>>N>>K;

	vector<vector<int>> b(K);

	vector<int> a(N);
	for(int i=0;i<N;i++){
		cin>>a[i];
		b[i%K].push_back(a[i]);
	}

	for(int i=0;i<K;i++){
		sort(b[i].rbegin(),b[i].rend());
	}

	sort(a.begin(),a.end());

	vector<int> na;
	for(int i=0;i<N;i++){
		na.push_back(b[i%K].back());
		b[i%K].pop_back();
	}

	if(a==na)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

    return 0;
}
