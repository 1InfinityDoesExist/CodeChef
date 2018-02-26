//Good and Bad Persons
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    string whoSent(string str, int k);
};
Solution::Solution(){}
int min(int x, int y)
{
    if(x == y)
    {
        return x;
    }
    return x < y ? x : y;
}
string Solution::whoSent(string str, int k)
{
    int totalLetter = str.length();
    int lowerLetter (0);
    int capitalLetter (0);
    for(string::size_type iter = 0; iter < totalLetter; iter++)
    {
        if(isupper(str[iter]))
        {
            capitalLetter++;
            continue;
        }
        lowerLetter++;
    }
    int mn = min(lowerLetter, capitalLetter);
    int baki = k - mn;
    if(baki < 0)
    {
         return "none";
    }
    if(baki == capitalLetter || baki == lowerLetter)
    {
        return "both";
    }
    if(mn == lowerLetter)
    {
        int cpL = lowerLetter;
        int cpC = capitalLetter;
        cpL += baki;
        cpC -= baki;
        if(cpL == cpC)
        {
            return "both";
        }
    }
    if(mn == capitalLetter)
    {
        int cpL = lowerLetter;
        int cpC = capitalLetter;
        cpL -= baki;
        cpC += baki;
         if(cpL == cpC)
        {
            return "both";
        }
    }

    if(baki < capitalLetter && mn == lowerLetter)
    {
        return "brother";
    }
    if(baki < lowerLetter && mn == capitalLetter)
    {
        return "chef";
    }
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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        string ans = sol.whoSent(str, k);
        cout << ans <<endl;
    }
    return 0;
}
