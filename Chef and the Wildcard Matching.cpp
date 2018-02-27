//Chef and the Wildcard Matching
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    int wildcard(string str1, string str2);
};
Solution::Solution(){}
int Solution::wildcard(string str1, string str2)
{
    if(str1.length() != str2.length())
    {
        return 0;
    }
    for(string::size_type iter = 0; iter < str1.length(); iter++)
    {
        if(str1[iter] == str2[iter] || (str1[iter] == '?' || str2[iter] == '?'))
        {
            continue;
        }
        else if(str1[iter] != '?' && str2[iter] != '?' && str1[iter] != str2[iter])
        {
            return false;
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
        string str1;
        cin >> str1;
        string str2;
        cin >> str2;
        int ans = sol.wildcard(str1, str2);
        if(ans == 1)
        {
            cout << "Yes" <<endl;
        }
        else
        {
            cout << "No" <<endl;
        }
    }
    return 0;
}
