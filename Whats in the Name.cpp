//Whats in the Name
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    string Name(string str);
};
Solution::Solution(){}
string Solution::Name(string str)
{
    queue<string> st;
    string s = "";
    for(string::size_type iter = 0; iter < str.length(); iter++)
    {
        if(str[iter] == ' ')
        {
            if(s.length() == 0)
            {
                continue;
            }
            else
            {
                s[0] = toupper(s[0]);
                st.push(s);
                s = "";
            }
        }
        else
        {
            s += tolower(str[iter]);
            if(iter == str.length()-1)
            {
                s[0] = toupper(s[0]);
                st.push(s);
            }
        }
    }
    str = "";
    while(!st.empty())
    {
        if(st.size() == 1)
        {
            str = str + st.front();
            return str;
        }
        else
        {
            string s = st.front();
            st.pop();
            str += s[0];
            str += ". ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int testCase;
    cin >> testCase;
    cin.ignore();
    while(testCase--)
    {
        string str;
        getline(cin, str);
        string ans = sol.Name(str);
        cout << ans <<endl;
    }
    return 0;
}
