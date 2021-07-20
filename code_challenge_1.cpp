#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> grayCode(int n) {
        cout << "n="; cin >> n;
        vector<int> res(pow(2,n));
        int diff = pow(2, n - 1);
        int max = pow(2, n) - 1;
        for (int i = 0; i <= diff-1; ++i) {
            res[i] = i;
            res[max - i] = i + diff;
        }
        
        return res;

    }
};

void main1() {
    Solution a;
    int n = 0;
    vector<int> x = a.grayCode(n);
    cout << "[" << 0;
    for (int i = 1; i < x.size(); ++i) {
        cout << "," << x[i];
    }
    cout << "]";
}
