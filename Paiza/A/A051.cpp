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
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for(int i = 0; i < (n); i++)

///////////////////////////////////////

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int>(w));
    rep(i,h){
        rep(j,w){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> sum(h,vector<int>(w));
    rep(i,h){
        rep(j,w){
            int straight,left,right;
            //Start
            if(i == 0){
                sum[i][j] = a[i][j];
            }else{
                straight = sum[i-1][j] + a[i][j];
                if(j == 0){
                    left = 0;
                }else{
                    left = sum[i-1][j-1] + a[i][j];
                }
                if(j == w-1){
                    right = 0;
                }else{
                    right = sum[i-1][j+1] + a[i][j];
                }
                sum[i][j] = max(straight,max(left,right));
            }
        }
    }

    int ans = 0;
    rep(i,w){
        ans = max(ans,sum[h-1][i]);
    }
    cout << ans << endl;
    return 0;
}
