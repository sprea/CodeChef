#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t,n,flag;
    string s;
    cin>>t;
    while (t--){
        cin>>n;
        cin>>s;
        flag=0;
        for(int i=0; i<s.length(); i++){
             if(s[i]=='Y'){
                 cout<<"NOT INDIAN"<<endl;
                 flag=1;
                 break;
             }
             else if(s[i]=='I'){
                 cout<<"INDIAN"<<endl;
                 flag=1;
                 break;
             }
        }
        if(flag==0){
            cout<<"NOT SURE"<<endl;
        }
    } 
	return 0;
}
