#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {2,4,2,6,4,8};    //2,4,6,8
    int sum = 8;
    int n = 6;
    vector <int> newArr;

    //Remove duplicates
    for(int i=0; i<n; i++){
        if(i!=-1){
            for(int j=i+1; i<n; i++){
            if(arr[i]==arr[j]){
                arr[j]==-1;
            }
        }
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]!=-1){
            newArr.push_back(arr[i]);
        }
    }
    //sort
    sort(newArr.begin(), newArr.end());


    vector<int> ans;

}