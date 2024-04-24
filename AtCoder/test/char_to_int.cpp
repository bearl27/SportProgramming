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
#include <sstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;

///////////////////////////////////////

signed main(){
    //00.0を入力 例）15.7
    string s;
    cin>>s;
    int n=s.size();//sの長さをnとする

    int y=s[n-1];
    //今は文字の文字コード番号になっている
    cout<<y<<endl;

    //charからintに
    y = s[n-1]-'0';
    cout<<y<<endl;

    //strからは無理
    s = s.substr(0,n-2);
    //int x = s;

    //strからint
    int x =atoi(s.c_str());
    x++;
    cout << x << endl;
}

