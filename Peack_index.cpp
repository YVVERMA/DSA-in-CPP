// Peack Idex in Mountain Array
/*Question
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.
*/
#include <iostream>
#include <vector>
using namespace std;
// Binary Search
int peakIndexInMountainArray(vector<int> &A)
{

    int n = A.size();
    int st = 0;
    int end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1])
        {
            return A[mid];
        }

        if (A[mid - 1] > A[mid])
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {0,3,8,9,5,2};
    cout << "Peack Index in Mountain Array: " << peakIndexInMountainArray(nums);
}
