//Max Array
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        vector<int> maxArray(vector<int> &A, const int k);
};
Solution::Solution(){}
vector<int> Solution::maxArray(vector<int> &A, const int k)
{
    vector<int> ans;
    deque<int> q;
    for(int iter = 0; iter < k; iter++)
    {
        while(!q.empty() && A[iter] >= A[q.back()])
        {
            q.pop_back();
        }
        q.push_back(iter);
    }
    for(int iter = k; iter < A.size(); iter++)
    {
        ans.push_back(A[q.front()]);
        while(!q.empty() && A[iter] >= A[q.back()])
        {
            q.pop_back();
        }
        while(!q.empty() && q.front() <= iter -k)
        {
            q.pop_front();
        }
        q.push_back(iter);
    }
    ans.push_back(A[q.front()]);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    cin >> n;
    vector<int> A;
    for(int iter = 0; iter < n; iter++)
    {
        int data;
        cin >> data;
        A.push_back(data);
    }
    int k;
    cin >> k;
    vector<int> ans = sol.maxArray(A, k);
    for(vector<int>::iterator iter = ans.begin(); iter != ans.end(); iter++)
    {
        cout << *iter << " ";
    }
    return  0;
}
