class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res;
        res.push_back(0);
        if (n == 0) return res;
        res.push_back(1);
        int curr = 1;
        for (int i = 2; i <= n; ++i) {
            curr = curr * 2;
            for (int i = res.size() - 1; i >= 0; --i) {
                res.push_back(res[i] + curr);
            }
        }
        return res;
    }
};