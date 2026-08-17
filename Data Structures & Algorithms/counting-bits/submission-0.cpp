class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans (n+1);
        for (int i =0;i<=n;i++)
        {
            int num = i;
            int cnt =0;
            while (num)
            {
                if (num%2 !=0) cnt++;
                num = num/2;
            }
            ans[i] = cnt;
        }

        return ans;
    }
};
