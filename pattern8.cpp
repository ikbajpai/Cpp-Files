#include <iostream>
using namespace std;
int main()
{
    int row = 1;
    cout << "Enter the value of n: " << endl;
    int n;
    cin >> n;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count;
            count++;
            col++;
        }
        cout << endl;
        row++;
        
    }
}