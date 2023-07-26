#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value of n: " << endl;
    int n;
    cin >> n;
    int row = 1;
    int count;
    while (row <= n)
    {
        int col = 1;
        count = row;
        while (col <= row)
        {
            cout << count;
            count++;
            col++;
        }
        row++;
        cout << endl;
    }
}