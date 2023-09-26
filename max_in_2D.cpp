#include<iostream>
#include<limits.h>
using namespace std;

int max_in_2D(int arr[][3],int r, int c){
    int maxAns=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            if(arr[i][j]>maxAns){
                maxAns=arr[i][j];
            }
        }

    }
    return maxAns;
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

    cout<< max_in_2D(arr,r,c);

}