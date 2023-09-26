#include<iostream>
using namespace std;
void Sort_zero_one(int arr[],int n){
     int zero_count=0;
     int one_count=0;

     for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero_count++;

        }
        if(arr[i]==1){
            one_count++;
        }
     }
     int i;
   for( i=0;i<zero_count;i++){
     arr[i]=0;
       
   }

   for(int j=i;j<n;j++){
    arr[j]=1;
   }

   for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
   }

}
int main(){
    int arr[]={1,0,0,1,0,0,1,1,1};
    int n=9;
    
    Sort_zero_one(arr,n);


}