class Solution {
public:

    bool searchRow(vector<vector<int>> & matrix, int target,int row){
        int n = matrix[0].size();

        int st = 0, end = n-1;
        while(st <= end){
            int midC = st+(end-st)/2;
            if(target == matrix[row][midC]){
                return true;
            } else if(target > matrix[row][midC]){
                st = midC +1;
            } else {
                end = midC -1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int st = 0, end = m-1;
        while(st <= end){
            int midR = st+(end-st)/2;

            if(matrix[midR][0] <= target && target <= matrix[midR][n-1]){
                return searchRow(matrix,target,midR);
            } else if(target < matrix[midR][0]){
                end = midR-1;
            } else {
                st = midR+1;
            }
        }
        return false;
    }
};