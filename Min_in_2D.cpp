#include<iostream>
#include<limits.h>
using namespace std;

int min_in_2D(int arr[][3],int r, int c){
    int minAns=INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            if(arr[i][j]<minAns){
                minAns=arr[i][j];
            }
        }

    }
    return minAns;
}
int main(){
    int arr[3][3];
    
    int r=3;
    int c=3;
    cout<<"enter the value of the array";
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            cin>>arr[i][j];
        }

    }

    cout<< min_in_2D(arr,r,c);

}