class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int st=0, end= n-1;
        int ans = 0;

        while(st < end){
            if(nums[st] + nums[end] == k){
                ans++;
                st ++;
                end --;
            } else if(nums[st] + nums[end] > k){
                end--;
            } else {
                st ++;
            }
        }
        return ans;
    }
};