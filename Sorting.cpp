#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// Bubble Sort
// TC = O(n^@)
void Bubble_Sort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            { 
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
            return;
    }
};

// Selection Sort
void SelectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[small])
            {
                small = j;
            }
        }
        swap(arr[i], arr[small]);
    }
};

void InsertionSort(vector<int> &A, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = A[i];
        int prev = i - 1;
        while (prev >= 0 && A[prev] < curr)
        {
            A[prev + 1] = A[prev];
            prev--;
        }
        A[prev + 1] = curr;
    }
}

// int main()
// {
//     vector<int> arr = {4, 1, 5, 2, 3};
//     int n = arr.size();
//     Bubble_Sort(arr, n);
//     // SelectionSort(arr, n);
//     // InsertionSort(arr, n);
//     for (int val : arr)
//     {
//         cout << val << " ";
//     }
// }
void SortDutch(vector<int> &A)
{
    int n = A.size();
    int mid = 0;
    int high = n-1;
    int low = 0;

    while(mid <= high){
        if(A[mid] == 0){
            swap(A[low],A[mid]);
            mid++; 
            low++;
        }else if(A[mid] == 1){
            mid++;
        }else {
            swap(A[high],A[mid]);
            high--;
        }
    }
    

}

int main()
{
    vector<int> A = {2,0,2,1,1,0,1,2,0,0};
    SortDutch(A);
    for(int val : A){
        cout << val << " ";
    }
}
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &A, int m, vector<int> &B, int n)
{
    int ind = m + n - 1;
    int i = m - 1;
    int j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (A[i] >= B[j])
        {
            A[ind--] = A[i--];
        }
        else
        {
            A[ind--] = B[j--];
        }
    }

    while (j >= 0)
    {
        A[ind--] = B[j--];
    }
}

// int main()
// {
//     vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // Extra space for nums2
//     vector<int> nums2 = {2, 5, 6};
//     int m = 3; // The first 3 elements of nums1 are valid
//     int n = 3; // nums2 has 3 elements

//     merge(nums1, m, nums2, n);

//     for (int val : nums1)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }
