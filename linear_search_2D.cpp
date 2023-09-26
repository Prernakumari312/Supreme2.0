#include<iostream>
using namespace std;
bool linear_search(int arr[][3],int r, int c,int target){
    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            if(arr[i][j]==target){
                return true;
            }
        }


    }
    return false;
}
int main(){
    int arr[3][3];
    int target=5;
    int r=3;
    int c=3;
    cout<<"enter the value of the array";
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            cin>>arr[i][j];
        }

    }

    cout<< linear_search(arr,r,c,target);
    
}