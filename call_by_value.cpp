#include<iostream>
using namespace std;

int  increment(int n){
    n++;
    return n;
}

int main(){
    int n;
    cin>>n;
     int r=increment(n);
    cout<<"n:"<<r;
}