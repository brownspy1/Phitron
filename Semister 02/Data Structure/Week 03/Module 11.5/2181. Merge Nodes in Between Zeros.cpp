https : // leetcode.com/problems/merge-nodes-in-between-zeros/
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
    void push(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *MyHead = NULL;
        ListNode *MyTail = NULL;
        int sum = 0;
        while (head != NULL && head->next != NULL)
        {
            head = head->next;
            if (head->val != 0)
            {
                sum += head->val;
            }
            else
            {
                push(MyHead, MyTail, sum);
                sum = 0;
            }
        }
        return MyHead;
    }
};