#include<iostream>
#include <array>
using namespace std;

int main(){
    string str = "abcdpabcd";

    // int i=0;
    // int j = str.length()-1;
    // string str1 ="";
    // string str2="";
    // int ans=0;

    // while(i<=j){
    //     str1 = str1 + str[i];
    //     str2 = str[j] + str2;

    //     if(str1 == str2){
    //         ans = max(str1.length(), ans);
    //     }

    // }

    int size = str.length();
    int i=0; int j=0;
    int arr[size];

    while(i<str.length()){
        if(str[i]==str[j]){
            arr[i]=j+1;
            i++;
            j++;
        }
        else{
            if(j==0){
                i++;
            }
            else{
                j = arr[j-1];
            }
        }
    }
    cout<<arr[size-1];

}