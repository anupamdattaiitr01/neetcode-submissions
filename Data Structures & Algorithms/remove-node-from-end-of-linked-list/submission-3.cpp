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
        ListNode *node = head;
        while (node)
        {
            ln++;
            node = node -> next;
        }

        if (ln ==1) return NULL;
        int cnt = 0;
        ListNode *prev = NULL;
        node = head;
        while (head)
        {
            if (cnt == (ln-n) && cnt ==0)
            {
                prev = head;
                head = head -> next;
                prev-> next = NULL;
                node = head;
            }
            else if (cnt == (ln-n))
            {
                prev -> next = head-> next;
                head-> next = NULL;
            }
            prev = head;
            head = head -> next;
            cnt ++;
        }

        return node;
    }
};
