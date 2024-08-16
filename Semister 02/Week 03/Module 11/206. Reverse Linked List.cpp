// https://leetcode.com/problems/reverse-linked-list/
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
    void Reverse(ListNode *&head, ListNode *temp)
    {
        if (temp->next == NULL)
        {
            head = temp;
            return;
        }
        Reverse(head, temp->next);
        temp->next->next = temp;
        temp->next = NULL;
    }
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL)
            return head;
        Reverse(head, head);
        return head;
    }
};