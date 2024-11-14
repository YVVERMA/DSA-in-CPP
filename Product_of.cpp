// Product of Array Except Self
//  BruteForce
/*
nums[1,2,3,4,5] and ans[24,12,8,6];
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

vector<int> productExceptSelf2(vector<int> nums)
{
    int n = nums.size();
    vector<int> prefex(n, 1);
    vector<int> surfex(n, 1);
    vector<int> ans(n, 1);

    // prefex count
    for (int i = 1; i < n; i++)
    {
        prefex[i] = prefex[i - 1] * nums[i - 1];
    }

    // Surfex count
    for (int i = n - 2; i >= 0; i--)
    {
        surfex[i] = surfex[i + 1] * nums[i + 1];
    }

    // ans
    for (int i = 0; i < n; i++)
    {
        ans[i] = prefex[i] * surfex[i];
    }
    return ans;
}

// Improve Space Complexity O(n) to O(1);
vector<int> productExceptSelf3(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);

    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int surfix = 1;

    for (int i = n - 2; i >= 0; i--)
    {
        surfix *= nums[i + 1];
        ans[i] *= surfix;
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    // vector<int> ans = productExceptSelf(nums);
    // vector<int> ans = productExceptSelf2(nums);
    vector<int> ans = productExceptSelf3(nums);
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
}
