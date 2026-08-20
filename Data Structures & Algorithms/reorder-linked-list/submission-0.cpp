/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        vector <int> nums;
        ListNode * node = head;
        while (node!= NULL)
        {
            nums.push_back(node-> val);
            node = node-> next;
        }

        int i =0, j = nums.size()-1;
        vector <int> arr;
        while (i <= j)
        {
            if (i==j)arr.push_back(nums [i]);
            else {
                arr.push_back(nums[i]);
                arr.push_back(nums[j]);
            }
            i++;
            j--;
        }

        // for (auto it: arr) cout << it << " ";
        // cout << endl;
        // for (auto it: nums) cout << it << " ";
        // cout << endl;
        node = head;
        int ind =0;
        while (node != NULL)
        {
            node-> val = arr[ind];
            ind++;
            node = node-> next;
        }
    }
};
