#include <iostream>
using namespace std;
 
int main() {
	long int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(a%2!=0){
	        if((a+1)==b || (a+2) == b || (a-2)==b)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else{
	        if((a-1)==b||(a+2)==b||(a-2)==b)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
 
