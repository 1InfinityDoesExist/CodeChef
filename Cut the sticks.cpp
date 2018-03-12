#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    public:
        Solution();
        vector<int> cutTheSticks(vector<int> &arr);
};
Solution::Solution(){}
vector<int> Solution::cutTheSticks(vector<int> &arr)
{
    vector<int> res;
    // Complete this function
    sort(arr.begin(), arr.end(), greater<int>());

    while(arr.size() != 0)
    {
        res.push_back(arr.size());
        for(int iter = 0; iter < arr.size(); iter++)
        {
            arr[iter] = arr[iter] - arr[arr.size()-1];
        }
        while(arr.back() == 0 && arr.size() != 0)
        {
            arr.pop_back();
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = sol.cutTheSticks(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
