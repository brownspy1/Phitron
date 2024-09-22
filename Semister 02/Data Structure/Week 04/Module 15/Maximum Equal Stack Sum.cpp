// https://www.naukri.com/code360/problems/maximum-equal-stack-sum_1062571
#include <bits/stdc++.h>
int getsum(stack<int> ss)
{
    int sum = 0;
    while (!ss.empty())
    {
        sum += ss.top();
        ss.pop();
    }
    return sum;
}
int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3)
{
    int sum1 = getsum(stk1);
    int sum2 = getsum(stk2);
    int sum3 = getsum(stk3);

    while (true)
    {
        if (sum1 == sum2 && sum2 == sum3)
            break;

        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 = sum1 - stk1.top();
            stk1.pop();
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 = sum2 - stk2.top();
            stk2.pop();
        }
        else
        {
            sum3 = sum3 - stk3.top();
            stk3.pop();
        }
    }
    return sum1;
}