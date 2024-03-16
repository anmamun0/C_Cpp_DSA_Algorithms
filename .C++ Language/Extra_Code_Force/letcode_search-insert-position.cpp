#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size()-1;

        int find = nums.size();
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (target == nums[mid])
            {
                return mid;
            }
            else if (target > nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            continue;
        }
        return start;
    }
};
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    vector<int> nums;
    while(N--){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cin >> target;

    Solution a;
    cout << a.searchInsert(nums, target);

    
        return 0;
}