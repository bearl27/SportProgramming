#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<queue>
using namespace std;

int main() {
    string line;
    vector<string> lines;
    while (getline(cin, line)) {
        if (!line.empty()) {
            lines.push_back(line);
        }
    }

    if (lines.empty()) return 0;

    if(lines[0] == "3"){
        istringstream iss(lines[1]);
        int menuKind;
        iss >> menuKind;
        map<int, pair<int, int>> menu;
        for(int i = 2; i < menuKind + 2; i++){
            istringstream tmp(lines[i]);
            int num, stock, price;
            tmp >> num >> stock >> price;
            menu[num] = make_pair(stock, price);
        }
        vector<queue<int>> waiting(1000);
        for(int i = menuKind + 2; i < lines.size(); i++){
            istringstream tmp(lines[i]);
            string order;
            tmp >> order;
            if(order == "received"){ 
                string str;
                int tableNum, menuNum;
                tmp >> str >> tableNum >> menuNum;
                waiting[menuNum].push(tableNum);

                //debug
                cout << "received order " << tableNum << " " << menuNum << endl;
            }else{
                // int menuNum;
                // tmp >> menuNum;
                // cout << "ready "<< waiting[menuNum].front()<<" "<< menuNum << endl;
                // waiting[menuNum].pop();
            }
        }
        //debug
            for(int i = 1; i < waiting.size(); i++){
                cout << i << ": ";
                while(!waiting[i].empty()){
                    cout << waiting[i].front() << " ";
                    waiting[i].pop();
                }
                cout << endl;
            }
    }
    return 0;
}