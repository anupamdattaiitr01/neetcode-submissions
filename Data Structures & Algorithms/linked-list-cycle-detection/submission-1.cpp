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
    bool hasCycle(ListNode* head) {
        map <ListNode *, int> mpp;
        ListNode * node = head;
        while (node != NULL)
        {
            if (mpp.find (node) == mpp.end())
            {
                mpp[node]++;
                node = node -> next;
            }
            else return true;
        }
        return false;
    }
};
