// #https://leetcode.com/problems/top-k-frequent-elements/submissions/1382395885/
class cmp
{
public:
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        return a.second < b.second ? true : false;
    }
};
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> frequncy;
        for (auto i : nums)
        {
            frequncy[i]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> data;
        for (auto x : frequncy)
        {
            data.push({x.first, x.second});
        }
        vector<int> v;
        while (k--)
        {
            v.push_back(data.top().first);
            data.pop();
        }
        return v;
    }
};