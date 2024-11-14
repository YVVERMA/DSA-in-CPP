#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// int main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int rows = 3;
//     int cols = 3;

//      arr[2][2] = 15;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

// }

// Input & Output

// int main()
// {
//     int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int rows = 3;
//     int cols = 3;
//     // cout << "input: \n";
//     // for (int i = 0; i < rows; i++)
//     // {
//     //     for (int j = 0; j < cols; j++)
//     //     {
//     //         cin >> mat[i][j];
//     //     }
//     // }
//     cout << "\nOutput:\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << mat[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

string linerS(int mat[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                return "Found";
            }
        }
    }
    return "Not Found";
}
// HomWork
pair<int, int> PairRet(int mat[][3], int key)
{
    pair<int, int> p = {-1, -1};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == key)
            {
                p = {i, j};
                return p;
            }
        }
    }
    return p;
}

// int main()
// {
//     int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int rows = 3;
//     int cols = 3;
//     int key = 8;
//     // cout << linerS(mat, rows, cols, key);
//     pair<int, int> result = PairRet(mat, key);
//     if (result.first == -1 && result.second == -1)
//     {
//         cout << "Rows No: " << result.first << "\nCols No: " << result.second << "\nNot Found";
//     }
//     else
//     {
//         cout << "Rows: No: " << result.first << "\nCols No: " << result.second << "\nFound";
//     }
// }

// Maximum Row Sum;
int Maximum_Row_Sum(int mat[][3])
{
    int maxVal = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < 3; j++)
        {
            rowSum += mat[i][j];
        }
        maxVal = max(maxVal, rowSum);
    }
    return maxVal;
}

int Maximum_Cols_sum(int mat[][3])
{
    int maxVal = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int ColsSum = 0;
        for (int j = 0; j < 3; j++)
        {
            ColsSum += mat[j][i];
        }
        maxVal = max(maxVal, ColsSum);
    }
    return maxVal;
}

// int main()
// {
//     int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     cout << "Maximum Value of sum row: " << Maximum_Row_Sum(mat) << endl;
//     cout << "Maximum Value of sum Cols: " << Maximum_Cols_sum(mat);
// }
int Diagonal_Sum(int mat[][4])
{
    int n = 4;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += mat[i][j];
            }
            else if (j == n - i - 1)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

// int main()
// {
//     int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

//     cout << "Diagonal Sum: " << Diagonal_Sum(mat);
// }

// 2D vectors
/*
int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6,10,11}, {7, 8, 9}};

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
*/

void SquarePattern(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void SquareChar(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void StarPrinting(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void PrintNum(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
void PrintChar(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void PrintTringle(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void PNUM(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void PCHAr(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    }
}
void NumP(int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
void CHarP(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void TriangleRev(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void TriangleAl(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << (char)(ch + j) << " ";
        }

        cout << endl;
    }
}
void FloysNUM(int n)
{
    int num = 1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
void floysChar(int n)
{
    char ch = 'A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}
void printCharacter(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}
void Pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s <= n - i - 1; s++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        for (int k = i; k > 0; k--)
        {
            cout << k;
        }
        cout << endl; 
    }
}
void PyramiChar(int n)
{
    for (int i = 0; i < n; i++)
    {
        int ch = 'A';
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << (char)ch;
            ch++;
        }
        ch -= 2;
        for (int k = 0; k < i; k++)
        {
            cout << (char)ch;
            ch--;
        }
        cout << endl;
    }
}
    int main()
    {
        int n = 5;
        // SquarePattern(n);
        // SquareChar(n);
        // StarPrinting(n);
        // PrintChar(n);
        // PrintNum(n);
        // PrintTringle(n);
        // PNUM(n);
        // PCHAr(n);
        // NumP(n);
        // CHarP(n);
        // TriangleRev(n);
        // TriangleAl(n);
        // FloysNUM(n);
        // floysChar(n);
        // printPattern(n);
        // printCharacter(n);
        // Pyramid(n);
        PyramiChar(n);
    }