#include<iostream>
using namespace std;
int main(){
    int p,r,t,CI;
    cin>>p>>r>>t;
    CI=p*(1+r/100)^t;
    cout<<CI;
}