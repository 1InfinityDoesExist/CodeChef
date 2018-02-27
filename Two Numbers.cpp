//Two Numbers
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    unsigned long long int twoNumber(unsigned long long int x, unsigned long long int y, unsigned long long int turn);
};
Solution::Solution(){}
unsigned long long int min(unsigned long long int x, unsigned long long int y)
{
    return x < y ? x : y;
}
unsigned long long int max(unsigned long long int x, unsigned long long int y)
{
    return x > y ? x : y;
}
unsigned long long int Solution::twoNumber(unsigned long long int x, unsigned long long int y, unsigned long long int turn)
{
    if(turn%2 == 0)
    {
        if(x > y)
        {
            return x/y;
        }
        else
        {
            return y/x;
        }
    }
    else
    {
        if((2*x) > y)
        {
            return (2*x)/ y;
        }
        else
        {
            return y/(2*x);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    unsigned long long int testCase;
    cin >> testCase;
    while(testCase--)
    {
        unsigned long long int x, y, turn;
        cin >> x >> y >> turn;
        unsigned long long int ans = sol.twoNumber(x, y, turn);
        cout << ans << endl;
    }
    return 0;
}
