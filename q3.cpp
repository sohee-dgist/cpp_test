#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <limits.h>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> students;
    stack<int> s;
    vector<int> h(n + 1), res(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    s.push(n);
    for (int i = n-1; i > 0; i--) {
        while ((!s.empty()) && (h[i] > h[s.top()])) {
            res[s.top()] = i;
            //cout << s.top() << " " << h[s.top()] << " " << i << endl;
            s.pop();
        }
        s.push(i);
    }
    for (int i = 1; i <= n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}