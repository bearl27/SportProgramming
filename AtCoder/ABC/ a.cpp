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
#define rep1(i, n) for (int i = 1; i < (n); i++)

///////////////////////////////////////

int main()
{
    string s;
    cin >> s;
    // sの最後の3文字を取得
    string sub = s.substr(s.size() - 3, 3);
    if(sub == "san"){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}