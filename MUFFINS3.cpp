#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,n,rem=0,val;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n==1||n==2){
	        cout<<n<<endl;
	        continue;
	    }
	    else cout<<(n/2)+1<<endl;
	}
    return 0;
}
 
