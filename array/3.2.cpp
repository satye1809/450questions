#include<bits/stdc++.h>
using namespace std;
#define maxx INT_MAX
void heapify(int arr[],int t,int n);
int findkmin(int arr[],int n,int k);

void swap(int* a,int* b){
    int t=*b;
    *b=*a;
    *a=t;
}
int left(int i){
return (2*i+1);
}
int right(int i){
return (2*i+2);
}
int extractmin(int arr[],int heaps){
    if (heaps == 0)
        return maxx;
int minn=arr[0];
if(heaps>1){
    arr[0]=arr[heaps-1];
    heapify(arr,0,heaps);
}

heaps--;
return minn;
}

void heapify(int arr[],int i,int heaps){

int l=left(i);
int r=right(i);
int smallest=i;
if(l<heaps && arr[i]>arr[l]){
smallest=l;
}
if(r<heaps&&arr[r]<arr[smallest]){
smallest=r;
}
if(smallest!=i){
swap(&arr[i],&arr[smallest]);
heapify(arr,smallest,heaps);
}
}

buildminheap(int arr[],int n){
    int heaps=n;
int i;
for(i=n/2-1;i>=0;i--){
heapify(arr,i,heaps);
}
}

int findkmin(int arr[],int n,int k){
    int g;
buildminheap(arr,n);
for(int i=0;i<k-1;i++){
 extractmin(arr,n);
}
return arr[0];
}




int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){cin>>arr[i];}
int k;
cin>>k;
cout<<findkmin(arr,n,k);

    return 0;
}
