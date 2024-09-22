// https://leetcode.com/problems/linked-list-cycle/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *F = head;
        ListNode *S = head;
        while (F != NULL && F->next != NULL)
        {
            F = F->next->next;
            S = S->next;
            if (F == S)
            {
                return true;
            }
        }
        return false;
    }
};