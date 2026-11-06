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
        ListNode *p= head, *q = head-> next;
        while (q!= NULL)
        {
            if (p == head)
            {
                ListNode *tmp = q-> next;
                q-> next = p;
                p-> next = NULL;
                p = q;
                q = tmp;
            }
            else 
            {
                ListNode *tmp = q-> next;
                q->next = p;
                p = q;
                q = tmp;
            }
        } 
        head = p;
        return head;
    }
};
