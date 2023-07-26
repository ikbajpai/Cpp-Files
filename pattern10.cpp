#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value of n: " << endl;
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col;
        while (col <= row)
        {
            cout << row - col + 1;
            col++;
        }
        cout << endl;
        row++;
    }
}