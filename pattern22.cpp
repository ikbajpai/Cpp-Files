#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            if (col + row<=n)
            {
                cout <<" ";
                col++;
            }
            else{
                cout<<row;
                col++;
            }
        }
        row++;
        cout << endl;
    }
}