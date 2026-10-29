typedef long long ll;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int ans = 1e9;
        while (l <= r)
        {
            int mid = ((r-l)/2) + l;
            ll cnt =0;
            for (int i =0;i<n;i++)
            {
                cnt += (piles[i]/mid);
                if (piles[i]%mid) cnt++;
            }

            // cout << mid << " " << cnt << endl;
            if (cnt <= h) 
            {
                ans= min (ans, mid);
                r = mid -1;
            }
            else l = mid+1;
        }

        return ans;
    }
};
