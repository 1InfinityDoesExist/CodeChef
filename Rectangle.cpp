//Rectangle
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    int rectangle(int a, int b, int c, int d);
};
Solution::Solution(){}
int Solution::rectangle(int a, int b, int c, int d)
{
    map<int, int> mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    mp[d]++;
    if(mp.size() == 1)
    {
        return true;
    }
    for(map<int, int>::iterator iter = mp.begin(); iter != mp.end(); iter++)
    {
        if(iter->second != 2)
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = sol.rectangle(a,b,c,d);
        if(ans == 1)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
    return 0;
}
