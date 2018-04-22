#include <bits/stdc++.h>

using namespace std;

int main() {

	int t,n,s;

	cin>>t;

vector<int>v;

	for(int i=0;i<t;i++){

	 cin>>n;

	 for(int j=0;j<n;j++){

	 cin>>s; 

	 v.push_back(s);

	 }

	 sort(v.begin(),v.end());

	 	cout<<v[0]+v[1]<<endl;

	 	v.clear();

	}

	return 0;

}

