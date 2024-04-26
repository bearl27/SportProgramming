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
    int uni,all;
    cin >> uni >> all;
    int n;
    cin >> n;
    int hp[n];
    rep(i, n) cin >> hp[i];
    int current_enemy_num = n;
    int ans = 0;
    while(current_enemy_num > 0){
        if(current_enemy_num > 1){
            rep(i,n){
                if(hp[i] > 0){
                    hp[i] -= all;
                    if(hp[i] <= 0){
                        current_enemy_num--;
                    }
                }
            }
        }else{
            rep(i,n){
                if(hp[i] > 0){
                    hp[i] -= uni;
                    if(hp[i] <= 0){
                        current_enemy_num--;
                    }
                }
            }
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
