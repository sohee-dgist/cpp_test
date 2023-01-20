#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int main() {
    int W, H, T, S;
    cin >> W >> H >> T >> S;
    vector<int> xs;
    vector<int> ys;
    for (int i = 0; i < T; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        xs.push_back(temp1);
        ys.push_back(temp2);
    }
    int max = INT_MIN;
    int iter = 0;
    for (int i = 0; i <= T; i++) {
        for (int j = 0; j <= T; j++) {
            int num = 0;
            for (int k = 0; k < T; k++) {
                if ((xs[k] >= xs[i]) && (xs[k]<=xs[i]+S)) {
                    if ((ys[k] >= ys[j]) && (ys[k] <=ys[j]+S)) {
                        num++;
                    }
                }
            }
            if (num > max) {
                max = num;
            }
        }
    }
    cout << max << endl;
}