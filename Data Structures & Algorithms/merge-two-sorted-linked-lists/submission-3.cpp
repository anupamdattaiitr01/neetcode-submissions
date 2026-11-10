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
        ListNode *head = NULL, *tmp = NULL;
        while (list1 != NULL && list2 != NULL)
        {
            if (list1 -> val <= list2 -> val)
            {
                ListNode * node = new ListNode (list1-> val);
                if (head == NULL)
                {
                    head = node;
                    tmp = node;
                    tmp = node;
                }
                else 
                {
                    tmp -> next = node;
                    tmp = node;
                }
                list1 = list1->next;
            }
            else 
            {
                ListNode * node = new ListNode (list2-> val);
                if (head == NULL)
                {
                    head = node;
                    tmp = node;
                    tmp = node;
                }
                else 
                {
                    tmp -> next = node;
                    tmp = node;
                }
                list2 = list2->next;
            }
        }

        while (list1 != NULL)
        {
            ListNode * node = new ListNode (list1-> val);
            if (head == NULL)
            {
                head = node;
                tmp = node;
                tmp = node;
            }
            else 
            {
                tmp -> next = node;
                tmp = node;
            }
            list1 = list1->next;
        }

        while (list2 != NULL)
        {
            ListNode * node = new ListNode (list2-> val);
            if (head == NULL)
            {
                head = node;
                tmp = node;
                tmp = node;
            }
            else 
            {
                tmp -> next = node;
                tmp = node;
            }
            list2 = list2->next;
        }

        return head;
    }
};
