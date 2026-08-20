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
    ListNode* reverseList(ListNode* head) {
        vector <int> tmp;
        ListNode* tmp1 = head;
        while (tmp1 != NULL)
        {
            tmp.push_back(tmp1-> val);
            tmp1 = tmp1-> next;
        }
        reverse (tmp.begin(), tmp.end());
        int ind =0;
        ListNode* tmp2 = head;
        while (tmp2 != NULL)
        {
            tmp2-> val = tmp[ind];
            ind++;
            tmp2 = tmp2-> next;
        }

        return head;
    }
};
