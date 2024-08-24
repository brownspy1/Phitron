// https://leetcode.com/problems/remove-linked-list-elements/description/
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
class Solution
{
public:
    ListNode *removeElements(ListNode *&head, int val)
    {
        if (head == NULL)
            return head;
        while (head != NULL && head->val == val)
        {

            ListNode *Deleted = head;
            head = head->next;
            delete Deleted;
        }
        ListNode *crt = head;
        while (crt != NULL && crt->next != NULL)
        {
            if (crt->next->val == val)
            {
                ListNode *De = crt->next;
                crt->next = crt->next->next;
                delete De;
            }
            else
            {
                crt = crt->next;
            }
        }

        return head;
    }
};