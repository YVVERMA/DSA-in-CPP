#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// int main() {
//     int size;
//     cout << "Enter size of array: ";
//     cin >> size;

//     vector<int> arr(size);
//     cout << "Enter " << size << " integers: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum * arr[i];
//     }

//     cout << "Total sum: " << sum << endl;
//     return 0;
// / }

// int main()
// {
//   int arr[] = {12, 4, 54, 6, 62, 623, -64};
//   int n = sizeof(arr) / 4;
//   int mx = arr[0];
//   for (int i = 1; i < n; i++)
//   {
//     // if(arr[i] > mx) mx = arr[i];
//     mx = min(mx, arr[i]);
//   };
//   cout << mx;
// }
#include <iostream>
using namespace std;

// int main() {
//     int size = 5;
//     int arr1[size] = {1, 2, 3, 4, 5};
//     int square[size];

//     for (int i = 0; i < size; i++) {
//         square[i] = arr1[i] * arr1[i]; // Calculate the square of each element
//     }

//     for (int i = 0; i < size; i++) {
//         cout << square[i] << " "; // Print each squared value
//     }

//     return 0;
// }

// int main()
// {
//   int size = 5;
//   int arr1[size] = {1, 2, 3, 4, 5};
//   int mx = INT_MIN;
//   for (int i = 0; i < size; i++)
//   {
//     mx = max(mx, arr1[i]);
//   }
//   int seMax = INT_MIN;
//   for (int i = 0; i < size; i++)
//   {
//     if (arr1[i] != mx)
//     {
//       seMax = max(seMax, arr1[i]);
//     }
//   }
//   cout << seMax;
//   return 0;
// }
#include <iostream>
#include <climits>
using namespace std;

void reverse(int arr[], int n)
{
  int start = 0;
  int end = n - 1;

  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

#include <iostream>
#include <climits>

using namespace std;

int findLargest(int arr[], int size)
{
  int largest = INT_MIN;
  int smalest = INT_MAX;
  int index = 0;
  for (int i = 0; i < size; i++)
  {
    largest = max(largest, arr[i]);

    smalest = min(smalest, arr[i]);
  }

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == smalest)
    {
      index = i;
      break;
    }
  }
  return index;
}
// int main()
// {
//   int marks[5] = {99, 10, -50, 40, 220};
//   int size = 5;

//   cout << " index of smlest: " << findLargest(marks, size) << endl;

//   return 0;
// }

void changeArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = 2 * arr[i];
  }
}
// int main()
// {
//   int arr[] = {1, 2, 3};
//   int size = sizeof(arr) / sizeof(int);
//   changeArr(arr, size);

//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " ";
//   }
// }
#include <cstdlib>

int linerSerch(int arr[], int size, int target)
{

  for (int i = 0; i < size; i++)
  {
    if (target == arr[i])
    {
      return i;
    }
  }
  return -1;
}
int reverseArr(int arr[], int size)
{

  int start = 0, end = size - 1;
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int maxProfit(vector<int> &prices)
{
  int n = prices.size();
  int mp = 0;

  int bestbuy = prices[0];
  for (int i = 1; i < n; i++)
  {
    if (prices[i] > bestbuy)
    {
      mp = max(mp, prices[i] - bestbuy);
    };
    bestbuy = min(bestbuy, prices[i]);
  };
  return mp;
}

int maxArea(vector<int> &height)
{
  int lp = 0;
  int rp = height.size() - 1;
  int maxWater = 0;

  while (lp < rp)
  {
    int w = rp - lp;
    int h = min(height[lp], height[rp]);
    int curr = w * h;
    maxWater = max(maxWater, curr);

    height[lp] < height[rp] ? lp++ : rp--;
  }
  return maxWater;
};
#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
  int n = nums.size();
  vector<int> ans(n, 1);
  vector<int> prefix(n, 1);
  vector<int> surfix(n, 1);
  // prefix
  for (int i = 1; i < n; i++)
  {
    prefix[i] = prefix[i - 1] * nums[i - 1];
  };

  // surfix
  for (int i = n - 2; i >= 0; i--)
  {
    surfix[i] = surfix[i + 1] * nums[i + 1];
  };

  // answer

  for (int i = 0; i < n; i++)
  {
    ans[i] = prefix[i] * surfix[i];
  };
  return ans;
};

int main()
{
  vector<int> nums = {1, 2, 3, 4};
  vector<int> result = productExceptSelf(nums);

  for (int val : result)
  {
    cout << val << " ";
  }
  cout << endl;

  return 0;
};

// जिंदगी में ख़ुशी हो तो उसे किस्मत कहते हैं,
// जिंदगी में सच्चा दोस्त हो तो उसे खुशनसीब कहते हैं
// जिंदगी में हमसफ़र हो तो उसे प्यार कहते हैं
// लेकिन जिंदगी में आप जैसे पिता हो तो
// उसे भाग्य कहते हैं !
// Happy Birthday My Sweet Dad !
