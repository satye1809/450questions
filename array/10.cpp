#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

	while(t--){
	    int n,j=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int k=0;
	    while(k<n-1){
	        int p=arr[k];
	        if(p==0 && k!=n-1){
	           j=-1;
	  break;
	        }
	        k=k+p;
	        j=j+1;

	    }
	    cout<<j;
	    cout<<endl;
	}

	return 0;
}
