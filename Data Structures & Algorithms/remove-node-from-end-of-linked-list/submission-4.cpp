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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int ln = 0;
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            ln ++;
            tmp = tmp->next;
        }

        if (ln ==1) 
        {
            head = NULL;
            return head;
        }
        if (n== ln){
            head = head-> next;
            return head;
        }

        ListNode *p = head, *q = head-> next;
        int cnt =1;
        while (cnt< (ln-n))
        {
            cnt++;
            ListNode *tmp = q-> next;
            p = q;
            q = tmp;
        }

        ListNode *tmp1 = q->next;
        p-> next = tmp1;
        q->next = NULL;
        return head;
    }
};
