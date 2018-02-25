//K Fibonnaci
#include<bits/stdc++.h>
using namespace std;


class Solution
{
private:
public:
    Solution();
    void fibonaciCalc(unsigned long long int n, unsigned long long int k);
};
Solution::Solution(){}

void Solution::fibonaciCalc(unsigned long long int n, unsigned long long int k)
{
    vector<unsigned long long int> fib;
    for(unsigned long long int iter = 1; iter <= n; iter++)
    {
        if(iter <= k)
        {
            fib.push_back(1);
            continue;
        }
        unsigned long long int sum (0);
        unsigned long long int jter = iter-1;
        unsigned long long int kter = k+1;
        while(kter--)
        {
            sum += fib[jter];
            jter--;
        }
        sum = sum%1000000007;
        fib.push_back(sum);
    }
    cout << fib[n-1];
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;

    unsigned long long int n, k;
    cin >> n >> k;
    sol.fibonaciCalc(n, k);
    return 0;
}
