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
        ListNode * curr = head;
        if (curr == NULL) return curr;
        ListNode *prev = head;
        curr = curr-> next;
        prev-> next = NULL;
        while (curr!= NULL)
        {
            ListNode *tmp = curr-> next;
            curr-> next = prev;
            prev = curr;
            curr = tmp;
        }

        return prev;
    }
};
