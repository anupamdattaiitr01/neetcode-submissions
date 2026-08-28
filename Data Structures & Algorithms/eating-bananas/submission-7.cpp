class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int lo = 1; int hi = *max_element(piles.begin(), piles.end());
        int ans = hi;
        while (lo <= hi)
        {
            int mid = (lo) + (hi-lo)/2;
            int cnt =0;
            for (int i =0;i<n;i++)
            {
                cnt += (piles[i]/mid);
                if (piles[i] %mid) cnt++;
                if (cnt> h) break;
            }

            if (cnt <= h) 
            {
                ans = min (ans, mid);
                hi = mid-1;
            }
            else lo = mid+1;
        }

        return ans;
    }
};
