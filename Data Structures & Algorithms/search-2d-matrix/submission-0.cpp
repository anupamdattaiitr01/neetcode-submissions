class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int lo = 0, hi = n-1;
        int ind = -1;
        if (matrix[0][0] > target) return false;
        if (matrix[n-1][0] < target) ind = n-1;
        else 
        {
            while (lo <= hi)
            {
                int mid = lo + (hi-lo)/2;
                if (matrix[mid][0] == target) return true;
                else if (matrix[mid][0] > target ) hi = mid-1;
                else lo = mid +1;
            }
            ind = hi;
        }
        if (target > matrix [ind][m-1]) return false;
            lo = 0, hi = m-1;
            while (lo <= hi)
            {
                int mid = lo + (hi-lo)/2;
                if (matrix[ind][mid] == target) return true;
                else if (matrix[ind][mid] > target) hi = mid-1;
                else lo = mid+1;
            }

            return false;
    }
};
