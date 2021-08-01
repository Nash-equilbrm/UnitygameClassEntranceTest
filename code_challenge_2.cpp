class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>> vect(n + 1);
        for (int i = 0; i <= n; ++i) {

            for (int j = 0; j <= m; ++j) {
                vect[i].push_back(0);
            }
        }
        int max = 0;
        for (int i = n - 1; i >= 0; --i) {
            for (int j = m - 1; j >= 0; --j) {
                if (nums1[i] == nums2[j]) {
                    vect[i][j] = vect[i + 1][j + 1] + 1;
                }
                if (max < vect[i][j]) max = vect[i][j];
            }
        }
        return max;
    }
};