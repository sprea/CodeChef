#include <bits/stdc++.h>
using namespace std;
 
int gcd(int a,int b){
    if(a%b==0)
        return b;
    else
        gcd(b%a,a);
}
 
int main(){
    int t,n1,n2,hcf;
    cin>>t;
    while (t--){
        cin>>n1>>n2;
        hcf=gcd(n1,n2);
        cout<<(n1*n2)/(hcf*hcf)<<endl;
    }
	return 0;
} 
