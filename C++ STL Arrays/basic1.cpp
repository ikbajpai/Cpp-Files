#include <iostream>
#include <array>

using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};

    cout << "elements in stl array are: " << endl;

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Elements at index 2 is: " << a.at(2) << endl;

    cout << "is array empty or non-empty: " << a.empty() << endl;
}