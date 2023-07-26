#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" Elements in the array1"<<endl;
    int arr1[n];
    for (int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"Entered elements are: "<<endl;
    for (int j=0;j<n;j++){
        cout<<arr1[j]<<endl;
    }
}