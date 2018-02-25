//Sum of Digits
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    unsigned long long int sumDigit(unsigned long long int x);
};

Solution::Solution(){}
unsigned long long int Solution::sumDigit(unsigned long long int x)
{
    unsigned long long int sum (0);
    while(x != 0)
    {
        sum += x%10;
        x /= 10;
    }
    return sum;
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
        unsigned long long int ans = sol.sumDigit(x);
        cout << ans << endl;
    }
    return 0;
}
