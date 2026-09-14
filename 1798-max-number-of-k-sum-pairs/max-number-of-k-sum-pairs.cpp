class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>m;
        int ans=0;

        for(int i=0; i<n; i++){
            int first=nums[i];
            int sec = k-first;

            if(m.find(sec) != m.end() && m[sec] >0){
                ans++;
                m[sec]--;
            }else{
                 m[first]++;
            }
        }
        return ans;

    }
};