#include <iostream>

#include <cmath>

using namespace std;

int main() {

	float t,b,ls,min,max;

	cin>>t;

	for(int i=0;i<t;i++){

	 cin>>b>>ls;

	 if(b==ls){

	 min=b;

	 max=b*1.414213;

	 }

	 else if(ls>b){

	 max=sqrt(ls*ls+b*b);

	 min=sqrt(ls*ls-b*b);

	 }

	 else if(ls>b){

	 max=sqrt(ls*ls+b*b);

	 min=sqrt(b*b-ls*ls);

	 }

	 cout<<min<<" "<<max<<endl;
	 }
	return 0;
	}

    