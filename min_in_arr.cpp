#include<iostream>
#include<limits.h>
using namespace std;
int find_min_in_arr(int arr[],int size){
    int minans=INT_MAX;
    for(int i=0;i<size; i++){
        if(arr[i]<minans){
            minans=arr[i];
        }
    }
    return minans;
}

int main(){
    int arr[]={10,2 ,3, 78,1,34};
    int size =6;
    int minimum=find_min_in_arr(arr,size);
    cout<<"minimum in the array"<<minimum<<endl;
}