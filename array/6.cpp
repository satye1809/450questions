#include<bits/stdc++.h>
using namespace std;

vnion(int arr1[],int n,int arr2[],int m){
int i=0,j=0,k=0,l=0;
int arr3[m+n],arr4[m+n];
while(i<n||j<m){
if(arr1[i]<arr2[j]){
    arr3[k++]=arr1[i++];

}
else if(arr1[i]>arr2[j]){
    arr3[k++]=arr2[j++];

}
else{
    arr3[k++]=arr2[j];
    arr4[l++]=arr2[j];
    j++;
    i++;
}
}
cout<<"union "<<endl;
for(i=0;i<k;i++){
    cout<<arr3[i]<<" ";
}
cout<<endl;
cout<<"intersection "<<endl;
for(i=0;i<l;i++){
    cout<<arr4[i]<<" ";
}
}

int main(){
int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
   vnion(arr1,n,arr2,m);

    return 0;
}
