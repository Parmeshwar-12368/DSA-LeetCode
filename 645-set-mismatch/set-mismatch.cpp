class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_set<int> s;
        int a,b;

        int expectedsum = 0, actualsum = 0;

        for(int i=0; i<n; i++){

           actualsum += nums[i];

            if(s.find(nums[i]) != s.end()){
                a = nums[i];
                ans.push_back(a);
            } 
            s.insert(nums[i]);
        }

        expectedsum = n*(n+1)/2;
        b = expectedsum + a - actualsum;
        ans.push_back(b);

        return ans;

    }
};