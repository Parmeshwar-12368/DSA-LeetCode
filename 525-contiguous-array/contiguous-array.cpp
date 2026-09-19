class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n = nums.size();
        vector<int> prefixsum(n);
        int ans = 0;

        for(int i = 0; i < n; i++){

            if(nums[i] == 0){
                nums[i] += -1;
            }
            else{
                nums[i] = 1;
            }

            if(i == 0){
                prefixsum[i] = nums[i];
            }
            else{
                prefixsum[i] = prefixsum[i-1] + nums[i];
            }
        }

        unordered_map<int,int> m;
        m[0] = -1;

        for(int j = 0; j < n; j++){

            int val = prefixsum[j];

            if(m.find(val) != m.end()){
                ans = max(ans, j - m[val]);
            }
            else{
                m[val] = j;
            }
        }

        return ans;
    }
};