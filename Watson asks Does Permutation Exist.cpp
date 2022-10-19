#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int flag=0;
	    for(int i=1;i<n;i++){
	        if(abs(arr[i]-arr[i-1])>1){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}
	// your code goes here
	return 0;
}
