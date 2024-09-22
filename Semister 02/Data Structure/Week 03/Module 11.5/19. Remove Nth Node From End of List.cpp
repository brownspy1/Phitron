// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
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
    int size(ListNode *head)
    {
        int n = 0;
        while (head != NULL)
        {
            n++;
            head = head->next;
        }
        return n;
    }
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int index = size(head) - n;
        if (index == 0)
        {
            ListNode *removeNode = head;
            head = head->next;
            delete removeNode;
        }
        else
        {
            ListNode *temp = head;
            for (int i = 1; i < index; i++)
            {

                temp = temp->next;
            }
            ListNode *del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }
        return head;
    }
};