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
    int n,k;
    cin >> n >> k;
    vpii foods;

    rep(i, n){
        int tmp;
        cin >> tmp;
        foods.push_back(make_pair(tmp, i));
    }

    sort(foods.rbegin(), foods.rend());

    // rep(i, n){
    //     cout << foods[i].first << " " << foods[i].second << endl;
    // }

    vector<int> maxFoodPos;

    rep(i, n){
        if(foods[i].first==foods[0].first)
            maxFoodPos.push_back(foods[i].second+1);
    }

    // for(auto tmp:maxFoodPos){
    //     cout << tmp << endl;
    // }

    rep(i,k){
        int badFoodPos;
        cin >> badFoodPos;
        if(find(maxFoodPos.begin(), maxFoodPos.end(), badFoodPos) != maxFoodPos.end()){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}

