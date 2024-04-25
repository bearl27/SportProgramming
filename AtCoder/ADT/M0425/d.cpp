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
    int m;
    cin >> m;
    int D[100] = {0};
    int days = 0;
    rep(i,m){
        cin >> D[i];
        days += D[i];
    }
    int midDay = (days+1) / 2;
    int ansMonth=0,ansDay=midDay;
    rep(i,m){
        if(D[i] >= ansDay){
            ansMonth = i+1;;
            break;
        }
        ansDay -= D[i];
    }
    cout << ansMonth << " " << ansDay << endl;


    return 0;
}
