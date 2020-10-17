#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n);
void reverse(int arr[],int n){
    int arr1[n];
for(int i=0;i<n/2;i++){
    int a=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=a;
}
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

