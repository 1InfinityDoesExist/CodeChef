//Chef And His Characters
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    pair<string, int> chefAndChar(string str);
};
Solution::Solution(){}
bool isValid(string str)
{
    sort(str.begin(), str.end());
    if(str == "cefh")
    {
        return true;
    }
    return false;
}
pair<string, int> Solution::chefAndChar(string str)
{
   // cout << str << endl;
    if(str.length() < 4)
    {
        return make_pair("lovely", 0);
    }
    int count (0);
    for(int iter = 0; iter < str.length()-3; iter++)
    {
        int jter = iter+3;
        string s = "";
        for(int pter = iter; pter <= jter; pter++)
        {
            s += str[pter];
        }
        if(isValid(s))
        {
            count++;
        }
    }
    return make_pair("lovely", count);
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
        pair<string, int> ans = sol.chefAndChar(str);
        if(ans.second != 0)
        {
            cout <<ans.first << " "<<ans.second <<endl;
        }
        else
        {
            cout <<"normal"<<endl;
        }
    }
    return 0;
}
