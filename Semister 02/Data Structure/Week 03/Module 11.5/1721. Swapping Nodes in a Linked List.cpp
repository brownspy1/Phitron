// https://leetcode.com/problems/swapping-nodes-in-a-linked-list
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
    ListNode *swapNodes(ListNode *head, int k)
    {
        int lenth = size(head);
        ListNode *first = head;
        ListNode *secend = head;

        for (int i = 1; i < k; i++)
        {
            first = first->next;
        }
        for (int i = 1; i <= lenth - k; i++)
        {
            secend = secend->next;
        }
        int temp = first->val;
        first->val = secend->val;
        secend->val = temp;

        return head;
    }
};