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
#define rep1(i,n) for(int i = 1; i < (n); i++)

///////////////////////////////////////

int main(){
    //in
    int X[4],Y[4];
    rep(i,4){
    cin >> X[i] >> Y[i];
    }
	int maxAC_x = max(X[0],X[2]);
	int minAC_x = min(X[0],X[2]);
	int maxBD_x = max(X[1],X[3]);
	int minBD_x = min(X[1],X[3]);
	int maxAC_y = max(Y[0],Y[2]);
	int minAC_y = min(Y[0],Y[2]);
	int maxBD_y = max(Y[1],Y[3]);
	int minBD_y = min(Y[1],Y[3]);

	//四角形が凸四角形であるかどうかを判定
	if(maxAC_x <= minBD_x && maxAC_y <= minBD_y && minAC_x <= maxBD_x && minAC_y <= maxBD_y){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}