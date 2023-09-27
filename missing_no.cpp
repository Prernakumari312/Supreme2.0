#include<iostream>
#include<vector>
using namespace std;
int missing_no(vector<int>&num){
    int n=num.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+num[i];
    }
    int total_sum=((n)*(n+1))/2;
    int ans=total_sum-sum;
    return ans;
}
int main(){
    vector<int>num={1,2,3,5,6,7,8};
    
    

     cout<<"missing no "<<missing_no(num);
    

}