#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<char,int> m;
    for(int i =0 ; i<n;i++){
        m[arr[i]]++;
    }
    // for(int i=0;i<n;i++){
    //     arr1[i]=m[arr[i]];
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }


    return 0;
}