//Find Remainder
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    int findRem(int x, int  y);
};
Solution::Solution(){}
int Solution::findRem(int x, int y)
{
    return x%y;
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
        int x, y;
        cin >> x >> y;
        int ans = sol.findRem(x, y);
        cout << ans <<endl;
    }
    return 0;
}
