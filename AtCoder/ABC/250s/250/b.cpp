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

int main(){
	int n,a,b;
	cin >> n >> a >> b;
	string x[n*a][n];

	//グループを作った
	string sharp, dot;
	rep(i, b){
		sharp += "#";
		dot += ".";
	}

	rep(i, n*a){
		if((i / a) % 2 == 0){
			rep(j, n){
				if(j % 2 == 0){
					x[i][j] = dot;
				}else{
					x[i][j] = sharp;
				}
			}
		}else{
			rep(j, n){
				if(j % 2 == 0){
					x[i][j] = sharp;
				}else{
					x[i][j] = dot;
				}
			}
		}
	}

	rep(i, n*a){
		rep(j, n){
			cout << x[i][j];
		}
		cout << endl;
	}



    return 0;
}
