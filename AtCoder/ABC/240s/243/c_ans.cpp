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

int main() {
    int N;
    cin >> N;

    vector<int> X, Y;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        X.push_back(x);
        Y.push_back(y);
    }

    string S;
    cin >> S;

    map<int, int> right_min, left_max;

    for (int i = 0; i < N; i++) {
        if (S[i] == 'R') {
            //left_max.find(Y[i]) != left_max.end()は存在するかどうかを確認
            //left_maxよりもX[i]が小さい場合、ぶつかる
            if (left_max.find(Y[i]) != left_max.end() && X[i] < left_max[Y[i]]) {
                cout << "Yes" << endl;
                return 0;
            }
        } else {
            if (right_min.find(Y[i]) != right_min.end() && right_min[Y[i]] < X[i]) {
                cout << "Yes" << endl;
                return 0;
            }
        }


        if (S[i] == 'R') {
            if (right_min.find(Y[i]) != right_min.end()) {
                right_min[Y[i]] = min(X[i], right_min[Y[i]]);
            } else {
                right_min[Y[i]] = X[i];
            }
        } else {
            if (left_max.find(Y[i]) != left_max.end()) {
                left_max[Y[i]] = max(X[i], left_max[Y[i]]);
            } else {
                left_max[Y[i]] = X[i];
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
