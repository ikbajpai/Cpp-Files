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
            cout << col;
            col++;
        }
        cout << endl;
        row++;
    }
}