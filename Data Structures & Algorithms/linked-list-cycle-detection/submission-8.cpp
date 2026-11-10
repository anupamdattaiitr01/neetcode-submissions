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
    bool hasCycle(ListNode* head) {
        if (head == NULL || head-> next == NULL) return false;
        ListNode *sl = head;
        ListNode *fs = head-> next;
        while (fs != NULL)
        {
            if (sl == fs) return true;
            fs = fs->next;
            if (fs != NULL) fs = fs->next;
            sl = sl -> next;
        }
        return false;
    }
};
