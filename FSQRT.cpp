#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	int n,t;
	cin>>t;
	while(t!=0){
	    cin>>n;
	    cout<<floor(sqrt(n))<<endl;
	    t--;
	}
	return 0;
}
