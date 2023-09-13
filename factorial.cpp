#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=n,fact=1;
    while(i>=1){
        fact=fact*i;
        i--;
    }
    cout<<fact;
}