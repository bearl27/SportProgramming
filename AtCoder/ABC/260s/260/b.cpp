#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compMath(const vector<int>& a, const vector<int>& b){
    return a[1] > b[1];
}

bool compEng(const vector<int>& a, const vector<int>& b){
    if(a[2] == b[2]){
        return a[0] < b[0];
    }
    return a[2] > b[2];
}

bool compSum(const vector<int>& a, const vector<int>& b){
    if((a[1] + a[2]) == (b[1] + b[2])){
        return a[0] < b[0];
    }
    return (a[1] + a[2]) > (b[1] + b[2]);
}

int main(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<vector<int>> students(n), selected;

    for(int i = 0; i < n; i++){
        students[i].resize(3);
        students[i][0] = i; // 生徒のID
        cin >> students[i][1]; // 数学のスコア
    }
    for(int i = 0; i < n; i++){
        cin >> students[i][2]; // 英語のスコア
    }

    // 数学スコアでソート
    sort(students.begin(), students.end(), compMath);
    selected.insert(selected.end(), students.begin(), students.begin() + x);
    students.erase(students.begin(), students.begin() + x);

    // 英語スコアでソート
    sort(students.begin(), students.end(), compEng);
    selected.insert(selected.end(), students.begin(), students.begin() + y);
    students.erase(students.begin(), students.begin() + y);


    // 合計スコアでソート
    sort(students.begin(), students.end(), compSum);
    selected.insert(selected.end(), students.begin(), students.begin() + z);
    students.erase(students.begin(), students.begin() + z);


    // 選ばれた生徒をIDでソートして出力
    sort(selected.begin(), selected.end());

    for(auto& student : selected){
        cout << student[0] + 1 << endl; // 1ベースのインデックスで出力
    }

    return 0;
}