// Containe with Most Water
// height = [1,8,6,2,5,4,8,3,7]
//  return max amount of water container can store
// leetcode 11
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxArea(vector<int> &height)
{
    int n = height.size();
    int width = 0;
    int hig = INT_MAX;
    int area = 0;
    int maxWater = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            width = j - i;
            hig = min(height[i], height[j]);
            area = width * hig;
            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
}

// Optimal Approach 2 Pointers
int maxArea2(vector<int> &height)
{
    int n = height.size();
    int lp = 0;
    int rp = n - 1;
    int ans = 0;

    while (lp < rp)
    {
        int width = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currW = width * ht;
        ans = max(ans, currW);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return ans;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Brute Approach 1st: " << maxArea(height);
    cout << "\nOptimal Approach 2st: " << maxArea2(height);
}
