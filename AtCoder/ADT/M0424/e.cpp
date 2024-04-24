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
    int n,k;
    cin >> n >> k;
    int maxPoint = 300;
    int sum[n];
    int rank[n];

    rep(i,n){
        int day1,day2,day3;
        cin >> day1 >> day2 >> day3;
        sum[i] = day1 + day2 + day3;
        rank[i] = sum[i];
    }
    sort(rank,rank+n,greater<int>());
    //rep(i,n)cout << rank[i] << endl;

    int compare = rank[k-1];
    rep(i,n){
        if(sum[i] + maxPoint >= compare){
            cout << "Yes" << endl;
        }else cout << "No" << endl;
    }


    return 0;
}
