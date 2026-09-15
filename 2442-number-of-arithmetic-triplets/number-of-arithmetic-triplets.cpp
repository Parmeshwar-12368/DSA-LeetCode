class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        set<int> s(nums.begin(),nums.end());
        int ans=0;

        for(int x: nums){
            if(s.find(x+diff) != s.end() && s.find(x+2*diff) != s.end()){
                ans++;
            }
        }
        return ans;
    }
};