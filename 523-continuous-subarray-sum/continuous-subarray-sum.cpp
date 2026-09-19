class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixsum(n,0);

        prefixsum[0] = nums[0];
        for(int i=1; i<n; i++){
            prefixsum[i] = prefixsum[i-1] + nums[i];
        }

        unordered_map<int, int> m;
        m[0] = -1;

        for(int j=0; j<n; j++){
            int rem = prefixsum[j] % k;

            if(m.find(rem) != m.end()){
                if(j - m[rem] >= 2){
                    return true;
                }
            } else {
                m[rem] = j;
            }
        }
        return false;
    }
};