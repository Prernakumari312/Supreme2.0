#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"enter the value of the array";
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            cin>>arr[i][j];
        }

    }

    cout<<"2D Array"<<endl;
    

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}