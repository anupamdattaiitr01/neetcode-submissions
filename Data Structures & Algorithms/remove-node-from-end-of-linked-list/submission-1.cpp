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
        int ln =0;
        ListNode *curr = head;
        while (curr != NULL)
        {
            ln++;
            curr = curr-> next;
        }

        if (ln ==1) return NULL;
        int l =0;
        curr = head;
        ListNode *prev = NULL;
        while (l != (ln-n))
        {
            l++;
            prev = curr;
            curr = curr-> next;
        }

        if (ln -n == 0)
        {
            ListNode *tmp= head;
            head = tmp -> next;
            tmp-> next = NULL;
        }
        else 
        {
            ListNode *tmp = curr-> next;
            prev-> next = tmp;
            curr-> next = NULL;
        }

        return head;
    }
};
