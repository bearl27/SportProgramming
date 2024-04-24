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
using vpii = vector<pii>;

///////////////////////////////////////

int main(){
	int N; cin >> N;
	vector<string> S(N),T(N);
	string ans = "No";
	for(int i=0; i<N; i++){
		cin >> S[i] >> T[i];
		for(int j=0; j<i; j++){
			if(S[i]==S[j] && T[i]==T[j]) ans = "Yes";
            break;
		}
	}
	cout << ans << endl;
    return 0;
}
