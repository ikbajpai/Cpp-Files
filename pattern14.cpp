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
        int col = 1;
        while (col <= n)
        {
            cout << (char)(65 + col + row - 2);
            col++;
        }
        row++;
        cout << endl;
    }
}