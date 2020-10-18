#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b);
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
sort012(int arr[],int n){
    int l=0,m=0,e=n-1;
for(int i=0;i<n;i++){
        if(m!=e){
    if(arr[i]==0){
            swap(&arr[i],&arr[l]);
        l++;
        m++;
    }
    else if(arr[i]==1){
        m++;
    }
    else{
        swap(&arr[i],&arr[e]);
        e--;
    }
        }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}




int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    return 0;
}

