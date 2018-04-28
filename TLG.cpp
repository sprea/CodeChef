#include <bits/stdc++.h>

using namespace std;

 

int main() {

	long long int t,p1,p2,sum1=0,sum2=0,count=0,lead=0,calc=0;

	cin>>t;

	for(int i=0;i<t;i++){

	 cin>>p1>>p2;

	 sum1+=p1;

	 sum2+=p2;

	 if(sum1>sum2){

	 calc=sum1-sum2;

	 if(count<calc){

	 count=calc;

	 lead=1;

	 }

	 }

	 else{

	 calc=sum2-sum1;

	 if(count<calc){

	 count=calc;

	 lead=2;

	 }

	 }

	}

	cout<<lead<<" "<<count<<endl;;

return 0;

}

