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
    void reorderList(ListNode* head) {
        ListNode *node = head;
        vector <int> tmp;
        while (node)
        {
            tmp.push_back(node -> val);
            node = node-> next;
        }

        int ln = tmp.size();
        int ind1 =0, ind2 = ln -1;
        int cnt =0;
        node = head;
        while (node)
        {
            if (cnt%2 ==0)
            {
                node -> val = tmp[ind1];
                ind1++;
            }
            else 
            {
                node -> val = tmp [ind2];
                ind2--;
            }
            cnt++;

            node = node -> next;
        }
    }
};
