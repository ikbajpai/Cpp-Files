#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value if n: " << endl;
    int n;
    cin >> n;
    int count;
    cout << endl;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        count = n + 1;
        while (col <= row)
        {
            // count--;
            cout << (char)(65 + count - row - 1);
            col++;
            count++;
        }
        cout << endl;
        row++;
    }
}