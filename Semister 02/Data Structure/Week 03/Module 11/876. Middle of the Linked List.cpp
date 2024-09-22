// https://leetcode.com/problems/middle-of-the-linked-list
int count(ListNode *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
};
ListNode *middleNode(ListNode *head)
{
    int n = count(head);
    int i = 1;
    while (i <= n / 2)
    {
        head = head->next;
        i++;
    }
    return head;
}