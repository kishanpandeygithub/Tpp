#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &arr)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int st = arr[0][0];
    int end = arr[0][1];
    for (auto &arrs : arr)
    {
        if (arrs[0] <= end)
        {
            end = max(end, arrs[1]);
        }
        else
        {
            ans.push_back({st, end});
            st = arrs[0];
            end = arrs[1];
        }
    }
    ans.push_back({st, end});
    return ans;
}
int main()
{
    // vector<int> arr = [[1,3],[2,6],[8,10],[15,18]];
   vector<vector<int>> arr = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}
    };
    vector<vector<int>> ans = merge(arr);
    for (auto &interval : ans) {
    cout << "[" << interval[0] << ", " << interval[1] << "] ";
}
    return 0;
}