#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long int t,a,ecnt=0,ocnt=0;
    cin>>t;
    while (t--){
        cin>>a;
        if(a%2==0)
        ecnt++;
        else
        ocnt++;
    }
    if(ecnt>ocnt)
        cout<<"READY FOR BATTLE"<<endl;
    else
        cout<<"NOT READY"<<endl;
	return 0;
}
