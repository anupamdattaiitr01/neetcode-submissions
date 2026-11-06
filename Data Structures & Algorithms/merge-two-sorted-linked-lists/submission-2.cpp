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
        ListNode *head = NULL;
        ListNode *prev = NULL;
        while (list1 != NULL && list2 != NULL)
        {
            if (list1-> val <= list2 -> val)
            {
                ListNode *tmp = new ListNode (list1-> val);
                if (head == NULL)
                {
                    head = tmp;
                    prev = tmp;
                }
                else 
                {
                    prev->next = tmp;
                    prev = tmp;
                }
                list1 = list1-> next;
            }
            else 
            {
                ListNode *tmp = new ListNode (list2-> val);
                if (head == NULL)
                {
                    head = tmp;
                    prev = tmp;
                }
                else 
                {
                    prev->next = tmp;
                    prev = tmp;
                }
                list2 = list2-> next;
            }
        }

        while (list1 != NULL)
    {
        ListNode *tmp = new ListNode (list1-> val);
        if (head == NULL)
        {
            head = tmp;
            prev = tmp;
        }
        else 
        {
            prev->next = tmp;
            prev = tmp;
        }
        list1 = list1-> next;
    }

    while (list2 != NULL)
    {
        ListNode *tmp = new ListNode (list2-> val);
        if (head == NULL)
        {
            head = tmp;
            prev = tmp;
        }
        else 
        {
            prev->next = tmp;
            prev = tmp;
        }
        list2 = list2-> next;
    }

    return head;
    }
};
