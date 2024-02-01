#include<iostream>
#include <vector>
using namespace std;

void permute(string str, vector <string> &ans, int i){
    if(i==str.length()-1){
        ans.push_back(str);
    }

    for(int j=i; j<str.length(); j++){
        swap(str[i], str[j]);
        permute(str, ans, i+1);
    }
}

int main(){
    string str = "abc";

    vector <string> ans;
    int i=0;
    permute(str, ans, i);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }

}