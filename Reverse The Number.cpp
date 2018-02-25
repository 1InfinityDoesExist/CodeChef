//Reverse The Number
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    unsigned long long int rev(unsigned long long int x);
};
Solution::Solution(){}
unsigned long long int Solution::rev(unsigned long long int x)
{
    unsigned long long int rev_num (0);
    while(x != 0)
    {
        rev_num = (rev_num * 10) + x%10;
        x /= 10;
    }
    return rev_num;
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
        unsigned long long int x;
        cin >> x;
        unsigned long long int ans = sol.rev(x);
        cout << ans << endl;
    }
    return 0;
}
