#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,d,n;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>d>>n;
	    while(d--){
	        n=(n*(n+1)/2);
	    }
	    cout<<n<<endl;
	}
	return 0;
} 
