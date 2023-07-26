#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value of n: " << endl;
    int n;
    cin >> n;
    int row = 1;
    int count = 0;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << (char)(65 + count);
            count++;
            col++;
        }
        row++;
        cout << endl;
    }
}