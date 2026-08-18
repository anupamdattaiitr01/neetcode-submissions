class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        multiset <int> st;
        for (int i=0;i<k;i++)
        {
            st.insert (nums[i]);
        }
        vector <int> ans;
        int num = *st.rbegin();
        ans.push_back(num);
        for (int i =k;i<n;i++)
        {
            st.erase (st.find (nums[i-k]));
            st.insert(nums[i]);
            int num1 = *st.rbegin();
            ans.push_back(num1);
        }

        return ans;
    }
};
