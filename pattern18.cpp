#include<iostream>
using namespace std;

int main(){
    cout<<"Hello, kindly enter the value of n: "<<endl;
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            if (col<=n-row){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            // cout<<"";
            col++;
        }
        cout<<endl;
        row++;
    }
}