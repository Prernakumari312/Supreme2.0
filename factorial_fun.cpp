#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=n;i>=1;i--)
    {
       f=f*i;
    }
    cout<<f;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    fact(n);
    return 0;

}