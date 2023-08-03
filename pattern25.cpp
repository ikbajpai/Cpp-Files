#include <iostream>
// #include <cmath>
using namespace std;
int main()
{
    int row = 1;
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= 2 * n - 1)
        {
            if (abs(row - col) <= n - 1)
            {
                cout <<"@";
                col++;
            }
            else
            {
                cout << " ";
                col++;
            }
        }
        // col++;
        row++;
        cout << endl;
    }
}