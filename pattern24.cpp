#include <iostream>
using namespace std;
int main()
{
    int row = 1;
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            if (row + col <= n)
            {
                cout << " ";
                col++;
            }
            else
            {
                cout << count;
                count++;
                col++;
            }
        }
        row++;
        cout << endl;
    }
}