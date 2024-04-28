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

///////////////////////////////////////
vector<int> removeElements(const vector<int>& arr, int n, int m) {
    vector<int> result;
    int count = 0;

    for (int num : arr) {
        if (num == n && count < m) {
            count++;
        } else {
            result.push_back(num);
        }
    }

    return result;
}

int query3(const vector<int>& vec){
    int maxNum = vec[0];
    int minNum = vec[0];
    for(int current: vec){
        maxNum = max(maxNum,current);
        minNum = min(minNum,current);
    }
    return maxNum - minNum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> X;

    rep(i,n){
        int query_1;
        cin >> query_1;
        int x,erase_num;
        switch(query_1){
            case 1:
                cin >> x;
                X.push_back(x);
                break;
            case 2:
                cin >> x >> erase_num;
                X = removeElements(X,x,erase_num);
                break;
            case 3:
                cout << query3(X) << endl;
                break;
        }
    }

    return 0;
}