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

///////////////////////////////////////

signed main(){
    string s;
    cin>>s;

    int n=s.size();//sの長さをnとする
    int y=s[n-1]-'0';//stringからintにする

    s=s.substr(0,n-2);
    //sの0文字目から、(n-2)文字連続で取得する。つまり、末尾2文字を削除する。

    if(y<=2){
        s+='-';
    }else if(y>=7){
        s+='+';
    }

    cout<<s<<endl;

    return 0;
}

