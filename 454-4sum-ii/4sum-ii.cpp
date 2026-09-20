class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> m;
        int count = 0;

        for(int i=0; i<nums1.size(); i++){
            int sum = 0;
            for(int j=0; j<nums2.size(); j++){
                sum = nums1[i]+nums2[j];
                m[sum] ++;
            }
        }

        for(int p=0; p<nums3.size(); p++){
            for(int q=0; q<nums4.size(); q++){
                int sum = nums3[p]+nums4[q];
                if(m.find(-sum) != m.end()){
                    count += m[-sum];
                }
            }
        }

        return count;
    }
};