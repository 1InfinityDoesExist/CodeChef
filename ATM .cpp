//ATM
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    float sub(float x, float y);
};
Solution::Solution(){}
float Solution::sub(float x, float y)
{
    if((int)x %5 == 0)
    {
        if(x+0.50 <= y)
        {
            return y- (x+0.50);
        }
    }
    return y;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    float x ,y ;
    cin >> x >> y;
    float  ans = sol.sub(x, y);
    printf("%.2f", ans);
    return 0;
}
