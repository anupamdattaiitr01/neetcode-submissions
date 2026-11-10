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
        if (head == NULL || head-> next == NULL) return;
        vector <int> tmp;
        ListNode * node = head;
        while (node != NULL)
        {
            tmp.push_back(node-> val);
            node = node-> next;
        }
        int ln = tmp.size();
        // cout << ln << endl;
        int i = 0, j = ln -1;
        node = head;
        while (i<= j)
        {
            // cout << i << " " << j << endl;
            // cout << tmp[i] << " " << tmp[j] << endl;
            if (i ==j)
            {
                head-> val = tmp[i];
                // cout << head-> val << " ";
            }
            else 
            {
                head -> val = tmp[i];
                // cout << head-> val << " ";
                head = head-> next;
                head -> val = tmp[j];
                // cout << head-> val << " ";
                head = head -> next;
            }
            i++;
            j--;
        }
        head = node;
    }
};
