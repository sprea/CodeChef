#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k,t,max;
	cin>>t;
    while(t--){
        cin>>n>>k;
        max=0;
        for(int i=2;i<=k;i++){
            if(max<(n%i))
            max=n%i;
        }
        cout<<max<<endl;
	}
	return 0;
} 
