#include <bits/stdc++.h>

using namespace std;

 

int main() {

int t,n;

cin>>t;

while(t--){

cin>>n;

if(n%2 !=0)

n=n-1;

n=n-2;

n=n/2;

long int f = abs(0.5*n*(n+1));

cout<<f<<endl;

}

	return 0;

}

