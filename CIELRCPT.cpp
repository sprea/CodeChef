#include <iostream>

using namespace std;

int main() {

	int t,n;

	cin>>t;

	while(t!=0){

	 cin>>n;

	 int count_1=0,count_2=0,count=0;

	 if(n>2048){

	 while(n>=2048){

	 n-=2048;

	 count_1+=1;

	 }

	 }

	 while(n>0){

	 if(n%2!=0){

	 n-=1;

	 count_1+=1;

	 }

	 else{

	 n/=2;

	 count_2+=1;

	 }

	 }

	 cout<<count_1<<endl;

	 t--;

	}

	return 0;

}

    