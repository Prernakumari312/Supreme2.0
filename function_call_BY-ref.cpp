#include<iostream>
using namespace std;
 void increment(int &k){
   k=k*10;
}
int main(){
    int n;
    cin>>n;
    increment(n);
    cout<<"n:"<<n;
}