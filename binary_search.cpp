#include<iostream>

using namespace std;
int binaryseach(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }

        mid=(s+e)/2;

    }

    return -1;
}
int main(){
   int arr[]={10,20,30,40,50,60,70,80,90};
   int target=90;
   int n=9;
   int ans_idx=binaryseach(arr, n, target);
   if(ans_idx==-1){
    cout<<"element not found";
   }
   else{
    cout<<"element is found:"<<ans_idx;
   }

}
