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
        vector <int> v;
        ListNode *tmp= head;
        while (tmp != NULL)
        {
            v.push_back (tmp -> val);
            tmp = tmp ->next;
        }

        tmp = head;
        // for (auto it: v) cout << it << " ";
        // cout << endl;
        // cout << head-> val << " " << tmp -> val << endl;
        int i =0, j = v.size()-1;
        while (i <= j)
        {
            if (i==j)
            {
                head-> val = v[i];
                i++;
                j--;
                head = head-> next;
            }
            else 
            {
                head-> val = v[i];
                head = head-> next;
                head-> val = v[j];
                i++;
                j--;
                head = head-> next;
            }
        }
        head = tmp;
    }
};
