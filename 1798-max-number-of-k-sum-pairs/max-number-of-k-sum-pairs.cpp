class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count = 0;
        int st = 0, end =n-1;

        while(st < end){
            int sum = nums[st] + nums[end];

            if(sum == k){
                count ++;
                st++; end--;
            } else if(sum < k){
                st++;
            } else {
                end--;
            }
        }
        return count;
    }
};