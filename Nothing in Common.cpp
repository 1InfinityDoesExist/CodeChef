//Nothing in Common
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    int noCommon(map<int, int> &mp1, map<int, int> &mp2);
};
Solution::Solution(){}
int Solution::noCommon(map<int, int> &mp1, map<int, int> &mp2)
{
    int count (0);
    for(map<int, int>::iterator iter = mp1.begin(); iter != mp1.end(); iter++)
    {
        if(mp2.find(iter->first) != mp2.end())
        {
            count++;
        }
    }
    return count;
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
        int n, m;
        cin >> n >> m;
        map<int, int> map1;
        for(int iter = 0; iter < n; iter++)
        {
            int data;
            cin >> data;
            map1[data]++;
        }
        map<int, int> map2;
        for(int iter = 0; iter < m ;iter++)
        {
            int data;
            cin >> data;
            map2[data]++;
        }

        int ans = sol.noCommon(map1, map2);
        cout << ans <<endl;
    }
    return 0;
}
