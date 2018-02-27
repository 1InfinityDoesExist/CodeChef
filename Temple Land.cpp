//Temple Land
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    int heyKeNahi(vector<int> &A);
};
Solution::Solution(){}
int Solution::heyKeNahi(vector<int> &A)
{
    if(A[0] != 1)
    {
        return 0;
    }
    if(A.size()%2 == 0)
    {
        return 0;
    }
    else
    {
        for(int iter = 1; iter <= A.size()/2; iter++)
        {
            if(A[iter]-A[iter-1] != 1)
            {
                return false;
            }
        }
        for(int iter = A.size()/2 +1; iter < A.size(); iter++)
        {
            if(A[iter-1] - A[iter] != 1)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        int n;
        cin >> n;
        vector<int> A;
        for(int iter = 0; iter < n; iter++)
        {
            int data;
            cin >> data;
            A.push_back(data);
        }
        int ans = sol.heyKeNahi(A);
        if(ans == 1)
        {
            cout << "yes" <<endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
