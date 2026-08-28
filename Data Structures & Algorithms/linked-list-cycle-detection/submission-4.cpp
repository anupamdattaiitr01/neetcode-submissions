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
        ListNode * slw = head, *fst = head;
        while (fst != NULL && fst-> next != NULL)
        {
            slw = slw-> next;
            fst = fst -> next;
            fst = fst -> next;
            if (slw == fst) return true;
        }
        return false;
    }
};
