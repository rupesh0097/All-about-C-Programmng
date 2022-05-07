#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,p,x,y;
	    cin>> n>>p>>x>>y;
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    for(int i=0; i<n; i++){
	        cout << arr[i];
	    }
	  
	}
	return 0;
}
