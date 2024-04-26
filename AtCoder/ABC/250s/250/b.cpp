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
int main() {

	int N,A,B;
	cin>>N>>A>>B;

	vector<string> tiles(N,string(N,'-'));
	for(int i=0;i<N;i++){
		if(i%2==0){
			for(int j=0;j<N;j++){
				if(j%2==0)tiles[i][j] = '.';
				else tiles[i][j] = '#';
			}
		}
		else{
			for(int j=0;j<N;j++){
				if(j%2==0)tiles[i][j] = '#';
				else tiles[i][j] = '.';
			}
		}
	}

	vector<string> X(A*N,string(B*N,'-'));
	for(int i=0;i<A*N;i++){
		for(int j=0;j<B*N;j++){
			X[i][j] = tiles[i/A][j/B];
		}
	}

	for(int i=0;i<A*N;i++){
		cout<<X[i]<<endl;
	}

    return 0;
}
