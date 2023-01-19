#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<string> sv(a);
    int len = INT_MAX;
    for (int i = 0; i < a; i++) {
        cin >> sv[i];
        len = min(len, int(sv[i].size()));
    }
    string answer = "";
    //for (int i = 0; i < len; i++) {
    //    string tmp = "";
    //    for (auto& s : sv) tmp += s[i];
    //    int m = count(tmp.begin(), tmp.end(), tmp[0]);
    //    if (m == a) answer += tmp[0];
    //    else break;
    //}
    //cout << answer;
    answer = sv[0];
    for (int i = 1; i < a; i++) {
        while (sv[i].find(answer) != 0) {
            answer = answer.substr(0, answer.size() - 1);
        }
    }
    cout << answer;
    return 0;
}