#include<iostream>
using namespace std;
int find_unique_ele(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[]={2,10,11,10,2,13,15,13,15};
    int n=9;

    cout<<"unique element: "<<find_unique_ele(arr,n);
}