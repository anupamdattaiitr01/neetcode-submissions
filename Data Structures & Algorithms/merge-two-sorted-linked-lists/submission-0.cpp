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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *curr1 = list1;
        ListNode *curr2 = list2;
        ListNode *ans = NULL, *res = NULL;
        while (curr1 != NULL && curr2 != NULL)
        {
            if (curr1-> val <= curr2-> val)
            {
                ListNode *tmp = new ListNode;
                tmp -> val = curr1-> val;
                if (ans == NULL)
                {
                    ans = tmp;
                    res = tmp;
                }
                else 
                {
                    res -> next = tmp;
                    res = tmp;
                }
                curr1 = curr1-> next;
            }
            else 
            {
                ListNode *tmp = new ListNode;
                tmp -> val = curr2-> val;
                if (ans == NULL)
                {
                    ans = tmp;
                    res = tmp;
                }
                else 
                {
                    res -> next = tmp;
                    res = tmp;
                }
                curr2 = curr2-> next;
            }
        }

        while (curr1 != NULL)
        {
            ListNode *tmp = new ListNode;
            tmp -> val = curr1-> val;
            if (ans == NULL)
            {
                ans = tmp;
                res = tmp;
            }
            else 
            {
                res -> next = tmp;
                res = tmp;
            }
            curr1 = curr1-> next;
        }

        while (curr2 !=  NULL)
        {
            ListNode *tmp = new ListNode;
            tmp -> val = curr2-> val;
            if (ans == NULL)
            {
                ans = tmp;
                res = tmp;
            }
            else 
            {
                res -> next = tmp;
                res = tmp;
            }
            curr2 = curr2-> next;
        }

        return ans;
    }
};
