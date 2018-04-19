#include <bits/stdc++.h>

using namespace std;

int main() {

	int t,n,m,p;

	cin>>t;

	for(int i=0; i<t; i++){

	 cin>>n>>m>>p;

	 if(n==0 || m==0 || p==0)
#include <bits/stdc++.h>

using namespace std;

int main()

{

int t, n, flag=0;

vector<string>v;

string s;

cin>>t;

for(int i=0; i<t; i++){

flag=0;

cin>>n;

v.clear();

for(int j=0;j<n;j++){

cin>>s;

v.push_back(s);

}

flag=1;

for(int k=0;k<n;k++){

if(v[k] =="cookie" ){

if(k<n-1){

if(v[k+1]!="milk"){

cout<<"NO\n";

flag=0;

break;

}

}

else if(flag==1){

cout<<"NO\n";

flag=0;

break;

}

/* if((v[k+1]!="milk") || n==k+1){

cout<<"NO"<<endl;

flag=1;

break;

}*/

}

}

if(flag==1)

cout<<"YES"<<endl;

} 

}


	 cout<<"NO"<<endl;

	 else if(n+m+p!=180)

	 cout<<"NO"<<endl;

	 else 

	 cout<<"YES"<<endl;

	}

	return 0;

} 

    