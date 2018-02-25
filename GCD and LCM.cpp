//GCD and LCM
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void GCDLCM(vector<unsigned long long int> A);
};
Solution::Solution(){}
unsigned long long int GCD(unsigned long long int a, unsigned long long int b)
{
    if(b == 0)
    {
        return a;
    }
    return GCD(b, a%b);
}
void Solution::GCDLCM(vector<unsigned long long int> A)
{
    unsigned long long int ans = A[0];
    for(unsigned long long int iter = 1; iter < A.size(); iter++)
    {
        ans = (A[iter]*ans)/GCD(A[iter], ans);
    }
    cout << GCD(A[0], A[1]) << " ";
    cout << ans <<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    unsigned long long int testCase;
    cin >> testCase;
    while(testCase--)
    {
        unsigned long long int x, y;
        cin >> x >> y;
        vector<unsigned long long int> A;
        A.push_back(x);
        A.push_back(y);
        sol.GCDLCM(A);
    }
    return 0;

}
