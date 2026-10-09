class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l =1, r= *max_element (piles.begin(), piles.end());
        int ans = r;
        while (l <= r)
        {
            int mid = l + (r-l)/2;
            int cnt =0;
            for (int i=0;i<n;i++)
            {
                cnt += (piles[i]/mid);
                if (piles[i]%mid) cnt++;
            }

            if (cnt <= h) 
            {
                ans = min (ans, mid);
                r=mid-1;
            }
            else l = mid+1;
        }
        return ans;
    }
};
