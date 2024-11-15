// Painter's Partition Problem
/*question
Given are N boards of length of each given in the form of array and M painters, such that each painter takes 1 unit of time to paint 1 unit of the board.

 The task is to find the minimum time to paint all boards under the constraints that ansy painter will only paint continous section of boards
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPaint(vector<int> &arr, int n, int m, int MaxPaint)
{
    if (m > n)
        return false;
    int board = 1;
    int time = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > MaxPaint)
        {
            return false;
        }
        if (time + arr[i] <= MaxPaint)
        {
            time += arr[i];
        }
        else
        {
            board++;
            time = arr[i];
        }
    }
    return board > m ? false : true;
    return board <= m ? true : false;
}

int Painter_partition(vector<int> &arr, int n, int m)
{
    int sum = 0;
    int Max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        Max = max(Max, arr[i]);
    }

    int st = Max;
    int end = sum;
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPaint(arr, n, m, mid))
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = arr.size();
    int m = 2;
    cout << "Minimum time to paint: " << Painter_partition(arr, n, m);
}