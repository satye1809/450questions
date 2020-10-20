#include<bits/stdc++.h>
using namespace std;

findlargest(int arr[],int n){
    int s=0,ms=INT_MIN,fs=0,en=0,st=0;
    for(int i=0;i<n;i++){
        fs=fs+arr[i];
        if(ms<fs){
        ms=fs;
        st=s;
        en=i;
           }
           if(fs<0){
            fs=0;
            s=i+1;
           }
    }
    cout<<ms;
    cout<<st<<" "<<en;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findlargest(arr,n);

return 0;
}
