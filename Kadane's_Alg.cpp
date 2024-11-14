#include <climits>
#include <iostream>
using namespace std;
#include <vector>
// Maximum Subarrayt Sum
// Leatcode 53
// int main()
// {
//     int n = 5;
//     vector<char> arr = {'A','B','C','D','E'};
//     // vector<int> arr = {1,2,3,4,5};

//     for (int st = 0; st < n; st++)
//     {
//         for (int end = st; end < n; end++)
//         {
//             for (int i = st; i <= end; i++)
//             {
//                 cout << arr[i];
//             }
//             cout << endl;
//         }
//     }
// }

// Brute Force Approach
// int maximumSub(vector<int> &arr)
// {
//     int n = arr.size();
//     int maxSum = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         int currsum = 0;
//         for (int j = i; j < n; j++)
//         {
//             currsum += arr[j];
//             maxSum = max(currsum, maxSum);
//         }
//     }
//     return maxSum;
// }

// int main()
// {
//     vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     cout << maximumSub(arr);
// }

// Kadane's Algorithm
// Most Optimised
int maximumSub(vector<int> &arr)
{
    int curr = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        curr += arr[i];
        maxSum = max(curr, maxSum);
        if (curr < 0)
        {
            curr = 0;
        }
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maximumSub(arr);
}