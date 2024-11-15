// Book Allocation Problem
/* question
There are N books each ith book has A[i] number of pages
You have to allocate to a student is minimum

* each book should be allocated to a student
* Each student has to be allocated at least one book
* Allotment should be in contiguos order
Calculate and return that mimimum possible number

Return -1 iuf a valid assignment is not possible.
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
bool isAllowed(vector<int> &nums, int n, int m, int maxBook)
{
    int student = 1;
    int pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > maxBook)
        {
            return false;
        }
        if (pages + nums[i] <= maxBook)
        {
            pages += nums[i];
        }
        else
        {
            student++;
            pages = nums[i];
        }
    }
    return student > m ? false : true;
    return student <= m ? true : false;
}

int bookAllocation(vector<int> &nums, int n, int m)
{
    int sum = 0;
   
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
      
    }
    int st = 0;
    int end = sum;
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isAllowed(nums, n, m, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> Pages = {2,1,3,4};
    int n = Pages.size();
    int m = 2;

    cout << bookAllocation(Pages, n, m);
}