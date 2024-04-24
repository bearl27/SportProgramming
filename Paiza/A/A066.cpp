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
    int workNum;
    cin >> workNum;
    bool workDay[100001] = {false};
    rep(i,workNum){
        int start,end;
        cin >> start >> end;
        for(int j = start; j <= end; j++){
            workDay[j] = true;
        }
    }
    int ContinuousWork = 0;
    int ans = 0;
    for(bool i:workDay){
        if(i){
            ContinuousWork++;
            //cout << ContinuousWork << endl;
        }else{
            ans = max(ans,ContinuousWork);
            ContinuousWork = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
