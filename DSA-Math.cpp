#include <iostream>
#include <cmath>
#include <vector>
#include <climits>
using namespace std;

// All Concepts

//  Prime Number
string isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return "Non Prime";
        }
    }
    return "Prime Num";
}
int main()
{
    int nums = 257;
    cout << isPrime(nums);
}

// Given an integer n, return the number of prime numbers that are strictly less than n.


 /*  Sieve of Eratosthenes of Prime num Approch
int countPrimes(int n)
{
    vector<bool> isPrime(n + 1, true);
    int ans = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            ans++;
            for (int j = i * 2; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    return ans;
}

// int main()
// {
//     int num = 189;
//     // cout << countPrimes(num);
// }
// //

// (2)  Digit in a number
void PrintDigits(int n)
{
    while (n != 0)
    {
        int digts = n % 10;
        cout << digts << " ";
        n /= 10;
    }
}
int sumDigts(int n)
{

    int ans = 0;
    while (n != 0)
    {
        int dig = n % 10;
        ans += dig;
        n /= 10;
    }
    return ans;
}
/*int main()
{
    int n = 69811;
    // PrintDigits(n);
    // cout << sumDigts(n) << endl;
    // cout << countDigits(n) << endl;

    // count of digts short methord
    cout << (int)(log10(n) + 1) << endl;
}



// Armstrong Number
bool ArmstrongNum(int num)
{
    int orignal = num;
    int sum = 0;

    while (num != 0)
    {
        int deg = num % 10;
        sum += (deg * deg * deg);
        num /= 10;
    }
    return sum == orignal;
}

// int main()
// {
//     int num = 153;
//     if (ArmstrongNum(num))
//     {
//         cout << "IS ArmstrongNum";
//     }
//     else
//     {
//         cout << "Not ArmstrongNum";
//     }
// }

// GCD = Gratest common diviser
int GCD(int a, int b)
{
    int gcd = 1;
    for (int i = 1; i < min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

// Euclid's Algorithm
int GCD1(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    if (a == 0)
        return b;
    return a;
}

// LCM = Lowest common multiple
int lcm(int a, int b)
{
    int gcd = GCD1(a, b);
    return (a * b) / gcd;
}

// int main()
// {
//     int a = 0, b = 24;
//     // cout << GCD(a, b);
//     // cout << GCD1(a, b);
//     cout << lcm(20,28);
// }

// Reverse NUM
int Reverse(int &num)
{
    int reverseN = 0;
    while (num != 0)
    {
        int deg = num % 10;
        if (num > INT_MAX / 10 || num < INT_MIN / 10)
            ;
        {
            return 0;
        }
        reverseN = (reverseN * 10) + deg;

        num /= 10;
    }
    return reverseN;
}

// int main()
// {
//     int num = 5;
//     // cout << Reverse(num);
// }
*/

// Revesion
bool Armstrong(int num)
{
    int orignal = num;
    int sum = 0;
    while (num != 0)
    {
        int deg = num % 10;
        sum += (deg * deg * deg);
        num /= 10;
    }
    return sum == orignal;
}
#include <iostream>
using namespace std;

int gcdRec(int a, int b)
{
    if (b == 0)
        return a;
    return gcdRec(b, a % b);
}

int GCD(int a, int b)
{
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
int lcm(int a, int b)
{
    int gcd = GCD(a, b);
    return (a * b) / gcd;
}

// Reverse Num:
int reverse(int num)
{
    int reverseN = 0;
    while (num != 0)
    {
        int deg = num % 10;
        reverseN = (reverseN * 10) + deg;
        num /= 10;
    }           
    return reverseN;
}

// int main()
// {
//     // cout << GCD(20, 28) << endl; // This should return 4
//     // cout << lcm(20, 24);
//     cout << reverse(123);
//     return 0;
// }
