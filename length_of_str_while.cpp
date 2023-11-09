#include<iostream>
using namespace std;

int findlength(char ch[],int size){
    int idx=0;
    while(ch[idx]!='\0'){
        idx++;
    }
    return idx;
}

int main(){
    char ch[100];
    cin>>ch;
    int len=findlength(ch,100);
    cout<<"Length of string is:"<<len<<endl;

}