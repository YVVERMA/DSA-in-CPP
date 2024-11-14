#include <climits>
#include <iostream>
using namespace std;
#include <vector>
// Pair Sum
// Return pair in sored array with target sum
// vector<int> pairSum(vector<int> arr, int target)
// {
//     vector<int> ans;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]);
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> arr = {2, 7, 11, 15};
//     int target = 13;
//     vector<int> ans = pairSum(arr, target);
//     for (int val : ans)
//     {
//         cout << val << " ";
//     }
// }

// Pair Sum Optimal

vector<int> pairSum(vector<int> arr, int target)
{
    int n = arr.size();
    int i = 0;
    int j = n - 1;

    vector<int> ans;
    while (i < j)
    {
        int pair = arr[i] + arr[j];
        if (pair > target)
        {
            j--;
        }
        else if (pair < target)
        {
            i++;
        }
        else
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            return ans;
        }
    }
}
// int main()
// {
//     vector<int> arr = {2, 7, 11, 15};
//     int target = 26;
//     vector<int> ans = pairSum(arr, target);
//     for (int val : ans)
//     {
//         cout << val << " ";
//     }
// }

// Majority Element
#include <algorithm>

int majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int freq = 1;
    int ans = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }
    return -1;
};

// Moore's Voting Algorithm
int Majority(vector<int> &nums)
{
    int freq = 0;
    int ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        else if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2,2,1,1,1,2,2};
    cout << majorityElement(arr);
}