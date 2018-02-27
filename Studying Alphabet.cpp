//Studying Alphabet
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void studingAlphabet(string str, vector<string> &A);
};
Solution::Solution(){}
void Solution::studingAlphabet(string str, vector<string> &A)
{
    sort(str.begin(), str.end());

    for(vector<string>::iterator iter = A.begin(); iter != A.end(); iter++)
    {
        string s = *iter;
        int count (0);
        for(string::size_type jter = 0; jter < s.length(); jter++)
        {
            if(str.find(s[jter]) != string::npos)
            {
                count++;
            }
        }
        if(count == s.length())
        {
            cout << "Yes" <<endl;
        }
        else
        {
            cout << "No" <<endl;
        }
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string str;
    cin >> str;
    int n;
    cin >> n;
    vector<string> A;
    for(int iter = 0; iter < n; iter++)
    {
        string c;
        cin >> c;
        A.push_back(c);
    }
    sol.studingAlphabet(str, A);
    return 0;
}
