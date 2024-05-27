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
#define rep1(i,n) for(int i = 1; i < (n); i++)

///////////////////////////////////////
struct card{
    int num;
    int a;
    int cost;
};

bool compare(card a, card b){
    return a.a > b.a;
}

int main(){
    //in
    int n;
    cin >> n;
    vector<card> c(n);
    set<int> ans;
    rep(i,n){
        int a,cost;
        cin >> a >> cost;
        c[i].num = i+1;
        c[i].a = a;
        c[i].cost = cost;
        ans.insert(i+1);
    }
    sort(c.begin(),c.end(),compare);
    set<int> dopCard;
    int minCost = 1000000000;
    rep(i,n){
        if(c[i].cost < minCost){
            minCost = c[i].cost;
        }else{
            dopCard.insert(c[i].num);
        }
    }
    for(auto x : dopCard){
        ans.erase(x);
    }

    //out
    cout << ans.size() << endl;
    for(auto x : ans){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
