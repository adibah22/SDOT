#include<iostream>
using namespace std;

int main(){
    string str = "abcdefabcij";

    int i=0;
    int j=1;

    int arr[26]={0};

    while(i<str.length()){
        int index = str[i]-'a';
        //cout<<"index"<<index<<endl;
        arr[index]++;

        if(arr[index]>1){
            break;
        }
        i++;

    }

    if(i!=str.length()-1){
        cout<<i;
    }
    
}