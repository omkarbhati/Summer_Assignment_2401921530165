class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        int j = n - 1;

        vector<int> ans(n);

        while (start <= end) {
            int s = nums[start] * nums[start];
            int e = nums[end] * nums[end];

            if (s > e) {
                ans[j] = s;
                start++;
            } else {
                ans[j] = e;
                end--;
            }

            j--;
        }

        return ans;
    }
};
