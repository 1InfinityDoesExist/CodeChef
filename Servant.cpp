//Servant
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void servant(const int n);
};
Solution::Solution(){}
void Solution::servant(const int n)
{
    if(n < 10)
    {
        cout <<"What an obedient servant you are!" << endl;
        return;
    }
    cout << "-1" <<endl;
    return;
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
        int data;
        cin >> data;
        sol.servant(data);
    }
    return 0;
}
