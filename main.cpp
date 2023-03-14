#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

int main() {
    string names_path = "../files/names.txt";
    ifstream names(names_path);


    char c;
    string buf;


    int id;
    string name;

    vector<pair<int, string>> countries;


    bool num = true;
    while(names.get(c)) {
        if (isspace(c) && num && !buf.empty()) {
            id = stoi(buf);
            num = false;
            buf.clear();
        } else if (isspace(c) && !num) {
            name = buf;
            num = true;
            countries.emplace_back(make_pair(id, name));
            buf.clear();
        } else if (!isspace(c)) {
            buf += c;
        }
    }
    



}
