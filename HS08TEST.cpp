#include <iostream>

#include <iomanip>

using namespace std;

int main() {

	int x;

	float y,b;

	cin>>x>>y;

	if(x%5==0 && (x+0.50)<y){

	 b=(y-x)-0.50;

	 cout<<b;

	}

	else

	cout<<y;

	return 0;

} 

