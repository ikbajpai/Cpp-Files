#include <iostream>
using namespace std;
int main()
{
    cout << "Fibonacci series: " << endl;
    int a = 0, b = 1;
    int nextNumber;
    cout << 0 << ", " << 1 << ", ";
    for (int i = 1; i <= 10; i++)
    {
        nextNumber = a + b;
        cout << nextNumber << ", ";
        a = b;
        b = nextNumber;
    }
}