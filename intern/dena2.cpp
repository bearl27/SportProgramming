#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
#include<queue>
using namespace std;

int main(){
    string line;
    vector<string> lines;
    while (getline(cin, line)) {
        if (!line.empty()) {
            lines.push_back(line);
        }
    }

    if (lines.empty()) return 0;

    if (lines[0] == "1") {
        int menuKind = stoi(lines[1]);
        map<int, pair<int, int>> menu;  // stock, price
        for (int i = 2; i < menuKind + 2; i++) {
            istringstream iss(lines[i]);
            int num, stock, price;
            iss >> num >> stock >> price;
            menu[num] = make_pair(stock, price);
        }
        for (int i = menuKind + 2; i < lines.size(); i++) {
            istringstream iss(lines[i]);
            string order;
            int tableNum, menuNum, amount;
            iss >> order >> tableNum >> menuNum >> amount;
            if (menu.find(menuNum) == menu.end()) {
                cout << "sold out " << menuNum << endl;
                continue;
            }
            auto& item = menu[menuNum];
            if (item.first < amount) {
                cout << "sold out " << tableNum << endl;
            } else {
                item.first -= amount;
                for (int j = 0; j < amount; j++) {
                    cout << "received order " << tableNum << " " << menuNum << endl;
                }
            }
        }
    }else if(lines[0] == "2"){
        istringstream iss(lines[1]);
        int menuKind, renjiNum;
        iss >> menuKind >> renjiNum;
        map<int, pair<int, int>> menu;
        for(int i = 2; i < menuKind + 2; i++){
            istringstream tmp(lines[i]);
            int num, stock, price;
            tmp >> num >> stock >> price;
            menu[num] = make_pair(stock, price);
        }
        int currentRenji = 0;
        map<int,int> cooking;//料理の数
        queue<int> waiting;
        for(int i = menuKind + 2; i < lines.size(); i++){
            istringstream tmp(lines[i]);
            string order;
            tmp >> order;
            if(order == "received"){
                string str;
                int tableNum, menuNum;
                tmp >> str >> tableNum >> menuNum;
                if(currentRenji < renjiNum){
                    cooking[menuNum]++;
                    currentRenji++;
                    cout << menuNum << endl;
                }else{
                    waiting.push(menuNum);
                    cout << "wait" << endl;
                }
            }else{
                int menuNum;
                tmp >> menuNum;
                if(cooking[menuNum] == 0){
                    cout << "unexpected input" << endl;
                }else{
                    cooking[menuNum]--;
                    if(!waiting.empty()){
                        int waitMenu = waiting.front();
                        waiting.pop();
                        cout << "ok " << waitMenu << endl;
                        cooking[waitMenu]++;
                    }else{
                        currentRenji--;
                        cout << "ok" << endl;
                    }
                }
            }
        }
    }else if(lines[0] == "3"){
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
        vector<queue<int>> waiting(100000);
        for(int i = menuKind + 2; i < lines.size(); i++){
            istringstream tmp(lines[i]);
            string order;
            tmp >> order;
            if(order == "received"){
                string str;
                int tableNum, menuNum;
                tmp >> str >> tableNum >> menuNum;
                waiting[menuNum].push(tableNum);
            }else{
                int menuNum;
                tmp >> menuNum;
                cout << "ready "<< waiting[menuNum].front()<<" "<< menuNum << endl;
                waiting[menuNum].pop();
            }
        }
    }
    return 0;
}