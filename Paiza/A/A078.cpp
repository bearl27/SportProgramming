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
vector<vector<bool>> canDelete(vector<vector<int>> check_vec){
    vector<vector<bool>> ans;
    rep(i,check_vec.size()){
        rep(j,check_vec[i].size()){
            if(i == 0){

            }
        }
    }
    return ans;
}

int main(){
    int h;
    cin >> h;
    vector<vector<int>> a(h,vector<int>(5));
    string line_str;
    rep(i,h){
        cin >> line_str;
        rep(j,5){
            if(line_str[j] == '.')
                a[i][j] = 0;
            else
                a[i][j] = line_str[j] - '0';

        }
    }

    return 0;
}
