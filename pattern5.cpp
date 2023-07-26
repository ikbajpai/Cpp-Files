#include <iostream>
using namespace std;
int main()
{
    std::cout << "Enter the value of n: "<<endl;
    int n;
    cin >> n;
    int row = 1;
    int i = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << i<<" ";
            i++;
            col++;
        }
        cout << endl;
        row++;
    }
}