#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int t,n,a;
	vector<int>v;
	cin>>t;
	while(t!=0){
	cin>>n;
	int count=0,fcount=0;
	for(int i=0;n>0;i++){
	    a=n%10;
	    n=n/10;
	    v.push_back(a);
	    count+=1;
	}
	for(int i=0;i<count;i++){
	    if(v[i]==4){
	      fcount+=1;  
	    }
	}
	cout<<fcount<<endl;
	v.clear();
	t--;
	}
	return 0;
}
