#include <iostream>

using namespace std;

int main() {

	int t,a,flag;

	cin>>t;

	for(int i=1;i<=t;i++){

	 flag=0;

	 cin>>a;

	 if(a==1||a==2){

			cout<<"yes"<<endl;

}

else{

for(int j=3;j<=a/2;j+=2){

	 if(a%j==0){

	 flag=1;

	 break;

	 }

	 }

	 if(flag==0){

	 cout<<"yes"<<endl;

	 }

	 else{

	 cout<<"no"<<endl;

	 }

}

}

	return 0;

} 

