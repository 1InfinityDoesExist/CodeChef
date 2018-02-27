//First and Last Digit

#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    int firstAndLast(string &str);
};
Solution::Solution(){}
int Solution::firstAndLast(string &str)
{
    return (str[0]-'0' + str[str.length()-1]- '0');
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
        string str;
        cin >> str;
        int ans = sol.firstAndLast(str);
        cout << ans <<endl;
    }
    return 0;
}
