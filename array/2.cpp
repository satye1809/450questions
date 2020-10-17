#include<bits/stdc++.h>
using namespace std;
struct Pair findminmax(int arr,int n);
struct Pair{
    int minn;
    int maxx;
};
struct Pair findminmax(int arr[],int n){
    int i;
    struct Pair minmaxx;
   if(n%2==0){
    if (arr[0] > arr[1])
        {
            minmaxx.maxx = arr[0];
            minmaxx.minn= arr[1];
        }
        else
        {
            minmaxx.minn = arr[0];
            minmaxx.maxx = arr[1];
        }
    i=2;
}
else{
    minmaxx.maxx=arr[0];
    minmaxx.minn=arr[0];
    i=1;
}
while(i<n-1){
 if(arr[i]>arr[i+1]){
    if(arr[i]>minmaxx.maxx){
        minmaxx.maxx=arr[i];
    }
        if(arr[i+1]<minmaxx.minn){
        minmaxx.minn=arr[i+1];
    }
 }
 else{
    if(arr[i]<minmaxx.minn){
        minmaxx.minn=arr[i];
    }
        if(arr[i+1]>minmaxx.maxx){
        minmaxx.maxx=arr[i+1];
    }
 }
 i=i+2;
}
return minmaxx;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   struct Pair minmaxx= findminmax(arr,n);
   cout<<minmaxx.minn<<" "<<minmaxx.maxx;
return 0;}
