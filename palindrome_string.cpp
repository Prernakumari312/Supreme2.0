#include<iostream>
using namespace std;

int findlength(char ch[],int size){
    int length=0;

    for(int i=0;i<size;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            length++;
        }
    }
    return length;

}

bool checkpalindrome(char ch[],int n){
    int i=0;
    int j=n-1;
    while(i>=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char ch[100];
    cin>>ch;
    int len=findlength(ch,100);
    cout<<"Length of string is:"<<len<<endl;
    bool ispalindrome=checkpalindrome(ch,len);
    if(ispalindrome){
        cout<<"valid Palindrome"<<endl;

    }
    else{
        cout<<"Invalid Palindrome"<<endl;

    }

}
