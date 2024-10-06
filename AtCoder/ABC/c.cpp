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

int main() {
    int n;
    cin >> n;
    vector<ll> k(n);
    ll total = 0;
    for(int i = 0; i < n; i++) {
        cin >> k[i];
        total += k[i];
    }

    int half = n / 2;
    vector<ll> first_half, second_half;

    // 前半と後半に分ける
    for(int i = 0; i < half; i++) first_half.push_back(k[i]);
    for(int i = half; i < n; i++) second_half.push_back(k[i]);

    // 前半の部分和を全て列挙
    vector<ll> sums1 = {0};
    for(ll x : first_half) {
        int size = sums1.size();
        for(int i = 0; i < size; i++) {
            sums1.push_back(sums1[i] + x);
        }
    }
    sort(sums1.begin(), sums1.end());

    // 後半の部分和を全て列挙
    vector<ll> sums2 = {0};
    for(ll x : second_half) {
        int size = sums2.size();
        for(int i = 0; i < size; i++) {
            sums2.push_back(sums2[i] + x);
        }
    }
    sort(sums2.begin(), sums2.end());

    ll result = 0;
    int j = sums2.size() - 1;

    // 二分探索で最適な組み合わせを見つける
    for(ll s1 : sums1) {
        while(j > 0 && s1 + sums2[j] > total / 2) j--;
        if(s1 + sums2[j] >= result && s1 + sums2[j] <= total / 2) {
            result = s1 + sums2[j];
        }
        if(j + 1 < sums2.size() && s1 + sums2[j+1] > result && s1 + sums2[j+1] <= total / 2) {
            result = s1 + sums2[j+1];
        }
    }

    cout << max(result, total - result) << endl;

    return 0;
}