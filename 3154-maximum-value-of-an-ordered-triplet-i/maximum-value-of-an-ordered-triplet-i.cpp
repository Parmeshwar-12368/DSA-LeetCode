class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();

        vector<long long> maxRight(n);

        maxRight[n - 1] = nums[n - 1];

        for(int i = n - 2; i >= 0; i--) {
            maxRight[i] = max((long long)nums[i], maxRight[i + 1]);
        }

        long long ans = 0;
        long long maxLeft = nums[0];

        for(int j = 1; j < n - 1; j++) {

            long long value =
                (maxLeft - nums[j]) * maxRight[j + 1];

            ans = max(ans, value);

            maxLeft = max(maxLeft, (long long)nums[j]);
        }

        return ans;
    }
};