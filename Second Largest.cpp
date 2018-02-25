//Second Largest
#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    unsigned long long int secondLargestFinder(vector<unsigned long long int > &A);
};
Solution::Solution(){}
unsigned long long int Solution::secondLargestFinder(vector<unsigned long long int > &A)
{
    sort(A.begin(), A.end(), greater<int>());
    return A[1];
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
        vector<unsigned long long int> A;
        for(int iter = 0; iter < 3; iter++)
        {
            int data;
            cin >> data;
            A.push_back(data);
        }
        unsigned long long int secondLargest = sol.secondLargestFinder(A);
        cout << secondLargest << endl;
    }
    return 0;
}
