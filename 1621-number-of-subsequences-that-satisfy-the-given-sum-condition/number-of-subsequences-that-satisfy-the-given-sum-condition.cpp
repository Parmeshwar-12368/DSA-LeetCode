class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mod = 1e9+7;
        int st=0, end=n-1;
        int ans=0;

        vector<int> power(n);
        power[0] = 1;

        for(int i=1; i<n; i++){
            power[i]=(power[i-1]*2LL) % mod;
        }

        while(st<=end){
            if(nums[st] + nums[end] <= target){
                ans = (ans + power[end-st]) % mod;
                st ++;
            } else {
                end--;

            }
        }
        return ans;
    }
};