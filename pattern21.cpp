#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int col;
        col=1;
        while(col<=n){
            if(row-col>=1){
                cout<<" ";

            }
            else{
                cout<<row;
            }
            col++;
        }
        cout<<endl;
        row++;
    }
}