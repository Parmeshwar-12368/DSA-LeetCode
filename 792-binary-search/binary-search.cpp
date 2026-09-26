class Solution {
public:
    
    int binary(vector<int>& nums ,int tar, int st, int end){
        if(st <= end){
            int mid = st+(end-st)/2;
            if(nums[mid] == tar){
                return mid;
            } else if(nums[mid] > tar){
                return binary(nums,tar,st,mid-1);
            } else {
                return binary(nums,tar,mid+1,end);
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int tar) {
       return binary(nums,tar,0,nums.size()-1);
    }
};