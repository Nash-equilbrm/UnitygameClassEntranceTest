#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    int search(vector<int> nums,int sz, int start) { //Luu y: Index bat dau tu 1. Vi nums[0] = nums[n] = -INF
        int mid = sz / 2 + start;
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
            return mid;
        }
        if (nums[mid] < nums[mid + 1]) {
            return search(nums, sz / 2, mid + 1);
        }
        if (nums[mid] < nums[mid - 1]) {
            return search(nums, sz / 2, mid - sz / 2);
        }
    }
    int findPeakElement(vector<int>& nums) {
        int sz,tmp;
        cout << "size ="; cin >> sz;
        nums.push_back(INT_MIN);
        for (int i = 0; i < sz; ++i) {
            cin >> tmp;
            nums.push_back(tmp);
        }
        nums.push_back(INT_MIN);
        return search(nums, sz, 1) - 1; //Tru 1 vi index bat dau tu 1.
    }
};


void main() {
    Solution a;
    vector<int>nums;
    cout << a.findPeakElement(nums);
}