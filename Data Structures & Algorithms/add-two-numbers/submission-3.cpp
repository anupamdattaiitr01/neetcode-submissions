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
    ListNode * reverse ( ListNode *head)
    {
        if (head == NULL || head-> next == NULL) return head;
        ListNode * prev = NULL;
        ListNode * curr = head;
        while (curr)
        {
            ListNode *tmp = curr;
            curr-> next = prev;
            prev = curr;
            curr = tmp;
        }
        return prev;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode *node1 = reverse (l1);
        // ListNode *node2 = reverse (l2);
        ListNode *ans = NULL;
        ListNode *node1 = NULL;
        int curr =0;
        while (l1 && l2)
        {
            int a = l1-> val;
            int b = l2-> val;
            int sum = a + b+ curr;
            int rm = sum%10;
            curr = sum/10;
            ListNode *tmp = new ListNode;
            tmp -> val = rm;
            if (ans == NULL)
            {
                ans = tmp;
                node1 = tmp;
            }
            else 
            {
                node1 -> next = tmp;
                node1 = tmp;
            }
            l1 = l1-> next;
            l2 = l2-> next;
        }

        while (l1)
        {
            int a = l1-> val;
            int sum = a + curr;
            int rm = sum%10;
            curr = sum/10;
            ListNode *tmp = new ListNode;
            tmp -> val = rm;
            if (ans == NULL)
            {
                ans = tmp;
                node1 = tmp;
            }
            else 
            {
                node1 -> next = tmp;
                node1 = tmp;
            }
            l1 = l1-> next;
        }
        while (l2)
        {
            int a = l2-> val;
            int sum = a + curr;
            int rm = sum%10;
            curr = sum/10;
            ListNode *tmp = new ListNode;
            tmp -> val = rm;
            if (ans == NULL)
            {
                ans = tmp;
                node1 = tmp;
            }
            else 
            {
                node1 -> next = tmp;
                node1 = tmp;
            }
            l2 = l2-> next;
        }

        if (curr != 0)
        {
            ListNode *tmp = new ListNode;
            tmp -> val = curr;
            if (ans == NULL)
            {
                ans = tmp;
                node1 = tmp;
            }
            else 
            {
                node1 -> next = tmp;
                node1 = tmp;
            }
        }

        ListNode *res = reverse (ans);
        return res;

    }
};
