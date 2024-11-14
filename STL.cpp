// Standard Template Library (STL)
// (1) - Containers
// (2) - Iterators
// (3) - Algorithms
// (4) - Functors
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

/*
Vector -
* size & capacity
* push_back & pop_back
* emplace_back
* at() or []
* front & back

* erase
* insert
* clear
*emty

*/
// int main()
// {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.emplace_back(6);

//     vec.pop_back();
//     for (int val : vec)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     cout << "vec front val: " << vec.front() << " last val: " << vec.back();
// };

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5,};
//     // vector<int> vec2(10,-10); // dynamic programming - tabulation DP[][]
//     vector<int> vec2(vec);

//     for (int val : vec2)
//     {
//         cout << val << ' ';
//     }
//     cout << endl;
// }

/*
 * erase
 * insert
 * clear
 * emty
 */
// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     // vec.erase(vec.begin()); // erase first element
//     // vec.erase(vec.begin() + 1,vec.end()-2); // erase another elem in vector
//     vec.insert(vec.begin() + 2, 100);
//     vec.clear();
//     // cout << vec.empty();
//     cout << endl;
//     for (int val : vec)
//     {
//         cout << val << " ";
//     }

//     cout << "Size: " << vec.size() << endl;
//     cout << "Capacity: " << vec.capacity() << endl;
// }

/*
    Iterators
        vec.begin
        vec.end
*/
// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     cout << "vec.begin: " << *(vec.begin()) << endl;
//     cout << "vec.end: " << *(vec.end()-1) << endl;
// }

/*
    Iterators
*/
// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     vector<int>::iterator it;
//     // for (it = vec.begin(); it != vec.end(); it++)
//     // {
//     //     cout << *(it )<< " ";
//     // }
//     for(auto it = vec.rbegin(); it != vec.rend(); it++){
//         cout << *(it) << " ";
//     }
// }

/*
    List
    list<int> l = {1,2,3};
    * push_back & push_front
    * emplace_back & emplace_front
    * pop_back & pop_pront
    * // size,erase,clear,begin,end,rbegin,rend,insert,front,back
*/
#include <iostream>
#include <list>
using namespace std;

// int main()
// {
//     // Initialize a list of integers
//     list<int> nums = {1, 2, 3, 4, 5};

//     nums.pop_back();
//     nums.pop_front();
//     nums.insert(next(nums.begin(), 2), 100);
//     nums.erase(next(nums.begin(), 2));            // Remove the 3rd element (value 3
//     cout << "Size: " << nums.size() << endl;      // Output: Size: 5
//     cout << "Is empty: " << nums.empty() << endl; // Output: Is empty: 0

//     nums.clear();
//     cout << "Is empty after clear: " << nums.empty() << endl; // Output: Is empty after clear: 1

//     for (int num : nums)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <iostream>
#include <deque>
using namespace std;

// int main()
// {
// 1. Creating a deque
// deque<int> dq = {1, 2, 3, 4, 5};
// for (int num : dq)
// {
//     cout << num << " "; // Output: 1 2 3 4 5
// }

// 2. Adding Elements
//  deque<int> dq;
//  dq.push_back(10);   // Add to back
//  dq.push_front(20);  // Add to front

// for (int num : dq) {
//     cout << num << " ";  // Output: 20 10
// }

// 3. Removing Elements
// deque<int> dq = {1, 2, 3, 4, 5};
// dq.pop_back();   // Remove from back
// dq.pop_front();  // Remove from front

// for (int num : dq) {
//     cout << num << " ";  // Output: 2 3 4
// }

// 4. Accessing Elements
//  cout << "Front: " << dq.front() << endl;  // Output: Front: 1
// cout << "Back: " << dq.back() << endl;    // Output: Back: 5

// 5. Inserting and Erasing Elements
//  deque<int> dq = {1, 2, 3, 4, 5};
// dq.insert(dq.begin() + 2, 100);  // Insert 100 at the 3rd position
// dq.erase(dq.begin() + 4);        // Erase the 5th element

// for (int num : dq) {
//     cout << num << " ";  // Output: 1 2 100 3 5
// }

// 6. Size and Empty Check
// deque<int> dq = {1, 2, 3, 4, 5};
// cout << "Size: " << dq.size() << endl;  // Output: Size: 5
// cout << "Is empty: " << dq.empty() << endl;  // Output: Is empty: 0

// dq.clear();
// cout << "Is empty after clear: " << dq.empty() << endl;  // Output: Is empty after clear: 1

//    deque<int> de = {1,2,3,4,5,6};
//     de.insert(de.begin() + 2,100);
//     de.erase(de.begin() + 2);

//    for(int val : de){
//     cout << val << " ";
//    }

//     return 0;
// }

/*
    Pair

        pair<int,int> p = {3,5};
        pair<char,int> p = {'a',1};

*/
// int main()
// {
//     // 1. Creating a Pair
// pair<int, string> p1;
// p1 = make_pair(1, "Apple");

// cout << p1.first << " " << p1.second << endl; // Output: 1 Apple

// 2. Initializing a Pair
// pair<int, string> p2(2, "Banana");

// cout << p2.first << " " << p2.second << endl; // Output: 2 Banana

// 3. Using tie to Unpack a Pair
// pair<int, string> p3 = make_pair(3, "Cherry");
// int num;
// string fruit = p3.first;

// cout << num << " " << fruit << endl; // Output: 3 Cherry

// 4. Comparing Pairs
// pair<int, string> p4 = make_pair(4, "Date");
// pair<int, string> p5 = make_pair(5, "Elderberry");

// if (p4 < p5) {
//     cout << p4.second << " is less than " << p5.second << endl; // Output: Date is less than Elderberry
// } else {
//     cout << p4.second << " is not less than " << p5.second << endl;
// }

// 5. Using Pairs in Containers
// vector<pair<int, string>> fruits;
// fruits.push_back(make_pair(6, "Fig"));
// fruits.push_back(make_pair(7, "Grape"));

// for ( auto p : fruits) {
//     cout << p.first << " " << p.second << endl; // Output: 6 Fig \n 7 Grape
//     }

// 6. Swapping Pairs
// pair<int, string> p6 = make_pair(8, "Honeydew");
// pair<int, string> p7 = make_pair(9, "Indian Fig");

// p6.swap(p7);

// cout << p6.first << " " << p6.second << endl; // Output: 9 Indian Fig
// cout << p7.first << " " << p7.second << endl; // Output: 8 Honeydew

// 7. Pair of Pairs
// pair<int, pair<string, double>> p8 = make_pair(10, make_pair("Jackfruit", 9.99));

// cout << p8.first << " " << p8.second.first << " " << p8.second.second << endl; // Output: 10 Jackfruit 9.99
// }

#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

//     vec.push_back({4,5});
//     vec.emplace_back(5,6);

//     for (auto p : vec)
//     {
//         cout << p.first << " " << p.second << endl;
//     }
//     return 0;
// }
#include <queue>
/*

    Stack
    stack<int> q;

    * top
    * pop
    * size
    * empty
    * swap
*/
#include <iostream>
#include <stack>
using namespace std;

// int main()
// {
//     // priority_queue<int> P;    // Desending order;
//     priority_queue<int, vector<int>, greater<int>> P; // Assending order
//     P.push(2);
//     P.push(4);
//     P.push(10);
//     P.push(54);
//     P.push(21);

//     while (!P.empty())

//     {
//         cout << P.top() << endl;
//         P.pop();
//     }
// }

// map
// #include <map>
// int main()
// {
//     map<string, int> m;
//     m["tv"] = 50;
//     m["laptop"] = 100;
//     m["headphonse"] = 50;
//     m["tablets"] = 120;
//     m["watch"] = 50;
//     m.emplace("mouse",60);
//     m.erase("mouse");
//     for (auto p : m)
//     {
//         cout << p.first << " = " << p.second << endl;
//     }

//     if(m.find("tvu") != m.end()){
//         cout << "Found";
//     }else {
//         cout << "not Found";
//     }
// }

#include <iostream>
#include <map>
#include <string>

// int main() {
//     multimap<string, int> m;

//     // Insert key-value pairs
//     m.insert({"Apple", 1});
//     m.insert({"Banana", 2});
//     m.insert({"Apple", 3}); // duplicate key
//     m.insert({"Orange", 6});
//     m.erase(m.find("Apple"));

//     // Print contents
//     for (const auto& pair : m) {
//         cout << pair.first << " - " << pair.second << endl;
//     }

//     // Check size and emptiness
//     cout << "Size: " << m.size() << endl;
//     cout << "Empty: " << (m.empty() ? "true" : "false") << endl;

//     return 0;
// }

#include <unordered_map>

// int main()
// {
//     unordered_map<string, int> m;

//     m.insert({"Apple", 1});
//     m.insert({"Banana", 2});
//     m.insert({"Apple", 3}); // duplicate key
//     m.insert({"Orange", 6});

//     // m.erase(m.find("Apple"));
//     for (auto pair : m)
//     {
//         cout << pair.first << " - " << pair.second << endl;
//     }
//     // Check size and emptiness
//     cout << "Size: " << m.size() << endl;
//     cout << "Empty: " << (m.empty() ? "true" : "false") << endl;

//     return 0;
// }

#include <set>
#include <unordered_set>

#include <iostream>

// int main()
// {
//     set<int> mySet = {4, 5, 5, 1, 2, 3};

//     cout << "Lower Bound " << *(mySet.lower_bound(4)) << endl;
//     cout << "Upper Bound " << *(mySet.upper_bound(4));

//     cout << endl;
//     for (auto x : mySet)
//     {
//         cout << x << " ";
//     }
//     cout << endl;

//     // Size of the set
//     cout << "Size of the set: " << mySet.size() << endl;

//     return 0;
// // }

/*Algorithms

    * Sorting
    sort(arr,arr+n);
    sort(arr,arr+n,greater<int>());
    sort(v.begin(),v.end());


*/
#include <algorithm>

// bool camparater(pair<int, int> p1, pair<int, int> p2)
// {
//     if (p1.second < p2.second)
//         return true;
//     if (p1.second > p2.second)
//         return false;
//     if (p1.first < p2.first)
//         return true;
//     else
//         return false;
// }

// int main()
// {
//     // vector<pair<int, int>> arr = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     // int n = sizeof(arr) / sizeof(int);
//     // sort(arr.begin(), arr.end(), camparater);
//     // sort(arr.begin(),arr.end(),greater<int>());
//     // reverse(arr.begin() + 1, arr.begin() + 3);

//     cout << "Max Value in arr: " << *max_element(arr.begin(), arr.end());
//     cout << "\nMin Value in arr: " << *min_element(arr.begin(), arr.end());

//     cout << "\nBinary Serch in STL: " << binary_search(arr.begin(), arr.end(), 4) << endl;

//     // for (auto val : arr)
//     // {
//     //     cout << val << " ";
//     // }
//     cout << endl;
//     list<int> l = {24, 51, 42, 21};

//     for (int val : l)
//     {
//         cout << val << " ";
//     }

// string s = "ABC";
// prev_permutation(s.begin(), s.end());
// cout << s << "  ";
// }

// Vector
/*int main()
{
    int x;
    vector<int> numbers;

    cout << "Input Numbers (-1 to stop): ";
    while (cin >> x && x != -1)
    {
        numbers.push_back(x);
    }

    cout << "Vector Numbers: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
        if(numbers[i] == -1){
            numbers.pop_back();
        }
    }
    cout << endl;

    return 0;
}
*/

// Deque
/*
int main() {
    int x;
    deque<int> numbers;

    cout << "Input Numbers (-1 to stop): ";
    bool insertFront = true;  // Flag to alternate between front and back
    while (cin >> x && x != -1) {
        if (insertFront) {
            numbers.push_front(x);
        } else {
            numbers.push_back(x);
        }
        insertFront = !insertFront;
    }

    cout << "Deque Elements: ";
    for (int val : numbers) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
*/

// sets

/*
int main() {
    int x;
    set<int> mySet;
    cout << "Input Set num (end with -1): ";
    while (cin >> x && x != -1) {
        mySet.insert(x);
    }

    cout << "\nOutput Num: ";
    for (auto val : mySet) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

*/

// map

/*
int main() {
    vector<string> names;
    vector<int> scores;
    string name;
    int score, count;

    // Collect names and scores
    for (int i = 0; i < 5; ++i) {
        cout << "Enter name: ";
        cin >> name;
        names.push_back(name);

        cout << "Enter score: ";
        cin >> score;
        scores.push_back(score);
    }

    // Input the number of names' scores to output
    cout << "Enter the number of names' scores to output: ";
    cin >> count;

    // Output names and their corresponding scores
    for (int i = 0; i < count && i < names.size(); ++i) {
        cout << names[i] << " : " << scores[i] << endl;
    }

    return 0;
}

*/

#include <iostream>
#include <vector>
using namespace std;

// calculateAverage
float calculateAverage(vector<int> nums)
{
    float average;
    int sum = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    average = static_cast<float>(sum) / n; // Correctly calculate the average
    return average;
}

// int main() {
//     vector<int> num = {3, 7, 11, 5};
//     cout << calculateAverage(num) << endl;
// }

int factorialIterative(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

// int main() {
//     int num = 5;
//     cout << factorialIterative(num);
// }

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num)
{
    int originalNum = num;
    int sum = 0;
    int numDigits = log10(num) + 1;

    while (num > 0)
    {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return sum == originalNum;
}

// int main()
// {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;

//     if (isArmstrong(number))
//     {
//         cout << number << " is an Armstrong number." << endl;
//     }
//     else
//     {
//         cout << number << " is not an Armstrong number." << endl;
//     }

//     return 0;
// }

bool isPalindrome(string s)
{
    int st = 0;
    int end = s.length() - 1;

    while (st <= end)
    {
        if (!isalnum(s[st]))
        {
            st++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

// int main() {
//     string str = "Madam";
//     if(isPalindrome){
//         cout << "is Palindrome";
//     }else {
//         cout << "Not Palindrome";
//     }
// }

int main()
{
    pair<int, pair<char, int>> p = {5, {'a', 1}};

    cout << p.first << " or " << p.second.first << " or " << p.second.second;
}
