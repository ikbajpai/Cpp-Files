#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;       // this line will create a vector v with 0 capacity, no value in it.
    vector<int> a(5, 1); // this line will create a vector a with 5 capacity and initialising all elements with 1
    vector<int> last(a); // this line will create a vector last and copy all the elements from a

    cout << "Printing last: " << endl;
    for (int i : last) // for each loop
    {
        cout << i << endl;
    }
    cout << endl;

    cout << "Capacity: " << v.capacity() << endl; // this line is used to get the capacity of the vector

    v.push_back(1); // this line is used to push back the value
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Size: " << v.size() << endl; // this line is used to get the ize of a vector
    cout << "element at 2nd index: " << v.at(2) << endl;

    cout << "Front: " << v.front() << endl; // this will return the first value
    cout << "Back: " << v.back() << endl;   // this will return the last value

    cout << "Before Pop: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back(); // thie will pop value from back
    cout << "Afterpop back: " << endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "Before clearing size: " << v.size() << endl;
}