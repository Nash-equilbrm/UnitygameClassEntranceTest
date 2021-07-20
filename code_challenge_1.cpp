#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> grayCode(int n) {
        cout << "n="; cin >> n;
        vector<bool> check(pow(2,n),false);
        vector<int> res;
        int max = pow(2, n) - 1;
        res.push_back(0);
        check[0] = true;
        for (int i = 1; i < pow(2, n) ; ++i) {
            int j = 0;
            int expnt = res[i - 1] / pow(2, j);
            int tmp = res[i - 1] + pow(2, j) * pow(-1, expnt);
        
            while (check[tmp]) {
                ++j;
                expnt = res[i - 1] / pow(2, j);
                tmp = res[i - 1] + pow(2, j) * pow(-1, expnt);
            }
            check[tmp] = true;
            res.push_back(tmp);
        }
        
        return res;

    }
};

void main() {
    Solution a;
    int n = 0;
    vector<int> x = a.grayCode(n);
    cout << "[" << 0;
    for (int i = 1; i < x.size(); ++i) {
        cout << "," << x[i];
    }
    cout << "]";
}
