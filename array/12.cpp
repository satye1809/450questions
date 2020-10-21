
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int arr[n],arr2[m];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<m;i++){
    cin>>arr2[i];
}
int i=0,j=0;
while(i<n&&j<m){
    if(arr[i]<arr2[j]){
        cout<<arr[i]<<" ";
        i=i+1;
    }
    else if(arr[i]>arr2[j]){
        cout<<arr2[j]<<" ";
        j=j+1;
    }
    else{
        cout<<arr[i]<<" ";
        cout<<arr2[j]<<" ";
        i=i+1;
        j=j+1;

    }

}
while(i<n ){
    cout<<arr[i]<<" ";
    i=i+1;
}
while(j<n){
    cout<<arr2[j]<<" ";
    j=j+1;
}
return 0;}
