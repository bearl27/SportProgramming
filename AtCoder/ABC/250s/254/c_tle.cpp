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
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> A (n);
    rep(i,n)cin >> A[i];
    for(int i=0;i+k < n;i++){
        for(int j=i; j+k < n;j += k){
            if(A[j] > A[j+k]){
                swap(A[j],A[j+k]);
            }
        }
    }
    vector<int> B = A;
    sort(A.begin(),A.end());
    if(A == B)cout << "Yes" << endl;
    else      cout << "No"  << endl;
    return 0;
}
