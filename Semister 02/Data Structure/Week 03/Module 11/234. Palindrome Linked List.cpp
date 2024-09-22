// https://leetcode.com/problems/palindrome-linked-list
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
    void insert_at_tail(ListNode *&head, ListNode *&tail, int value)
    {
        ListNode *newNode = new ListNode(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void reveres(ListNode *&Head, ListNode *temp)
    {
        if (temp->next == NULL)
        {
            Head = temp;
            return;
        }
        reveres(Head, temp->next);
        temp->next->next = temp;
        temp->next = NULL;
    };
    void print(ListNode *head)
    {
        while (head != NULL)
        {
            cout << head->val << " ";
            head = head->next;
        }
    };
    bool isPalindrome(ListNode *head)
    {
        if (head == NULL)
            return true;
        ListNode *newHead = NULL;
        ListNode *newTail = NULL;
        ListNode *temp = head;
        while (temp != NULL)
        {
            insert_at_tail(newHead, newTail, temp->val);
            temp = temp->next;
        }
        reveres(newHead, newHead);
        print(newHead);
        temp = head;
        ListNode *tem = newHead;
        while (temp != NULL)
        {
            if (temp->val != tem->val)
            {
                return false;
            }
            temp = temp->next;
            tem = tem->next;
        }
        return true;
    }
};