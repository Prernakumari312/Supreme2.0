#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int ans=1;
    while(i<=n){
        int a;
        cin>>a;
        ans=ans*a;
        i++;
    }

    cout<<ans;
}