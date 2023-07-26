#include<iostream>
using namespace std;
 int main(){
    int row = 1;
    while (row <= 4){
        int col = 1;
        while(col <= 4){
            cout<<"*\t";
            col++;        
        }
        cout<<endl;
        row++;
    }
 }