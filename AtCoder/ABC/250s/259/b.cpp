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

int main(){
    //in
    double x,y;
    int d;
    cin >> x >> y >> d;
    //do
    double r = sqrt(x*x + y*y);
    double now_d = atan2(y,x);
    x = r * cos(now_d + d * M_PI / 180);
    y = r * sin(now_d + d * M_PI / 180);

    //out
    cout << fixed << setprecision(10) << x << " " << y << endl;

    return 0;
}
