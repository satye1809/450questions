#include <bits/stdc++.h>
using namespace std;
#define max INT_MAX


merger(int arr[],int p,int q,int r){
    int l1=q-p+1;
    int r1=r-q;
    int arrl[l1],arrr[r1];
    for(int i=0;i<l1;i++){
        arrl[i]=arr[p+i];
    }
    arrl[l1]=max;
    for(int j=0;j<r1;j++){
        arrr[j]=arr[q+j+1];
    }
    arrr[r1]=max;
    int i=0,j=0;
    int k=p;
    while(i<l1 && j < r1){
        if(arrl[i]<arrr[j]){
            arr[k]=arrl[i];
            i++;
        }
        else if(arrr[j]<arrl[i]){
            arr[k]=arrr[j];
            j++;
        }
k++;
    }
    while(i<l1){
        arr[k]=arrl[i];
        i++;
        k++;
    }
    while(j<r1){
        arr[k]=arrr[j];
        j++;
        k++;
    }

}
mergesort(int arr[],int p,int r){
if(p<r){
    int q=p+(r-p)/2;

    mergesort(arr,p,q);
    mergesort(arr,q+1,r);
    merger(arr,p,q,r);
}

}

int findkmin(int arr[],int n,int k){
    mergesort(arr,0,n-1);
    int i;

   return arr[k-1];

}

 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int k;
     cin>>k;

     cout<<"minimum "<<k<<" element is "<<findkmin(arr,n,k);

 return 0;
 }
