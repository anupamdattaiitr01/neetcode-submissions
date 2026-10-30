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
        if (head == NULL || head-> next == NULL) return head;
        ListNode *p = head, *q = head -> next;
        while (q != NULL)
        {
            ListNode *tmp = q -> next;
            q -> next = p;
            if (p == head) p-> next = NULL;
            p = q;
            q = tmp;
        }
        head = p;
        return head;
    }
};
