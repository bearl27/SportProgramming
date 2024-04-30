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
//入力
	int n,k;
    vector<int> haveLight;//-1しないと
    vector<ll> X,Y;
    vector<ll>lightX,lightY;
    cin >> n >> k;
    rep(i,k){
        int light;
        cin >> light;
        haveLight.push_back(--light);
    }
    rep(i,n){
        int x,y;
        cin >> x >> y;
        X.push_back(x);
        Y.push_back(y);
    }
    rep(i,k){
        lightX.push_back(X[haveLight[i]]);
        lightY.push_back(Y[haveLight[i]]);
    }

//計算
    ll ans = 0;;
    ll minDis = 0;
    ll dis = 0;
    rep(i,n){
        rep(j,k){
            dis = (X[i]- lightX[j])*(X[i]- lightX[j])+(Y[i] - lightY[j])*(Y[i] - lightY[j]);
            if(j == 0){
                minDis = dis;
            }else{
                minDis = min(minDis,dis);
            }
        }
        ans = max(minDis,ans);
    }

    printf("%.12lf\n",sqrt((double)ans));

    return 0;
}
