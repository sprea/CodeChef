#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t,flag=0;
    string s1,s2;
	cin>>t;
    while(t--){
        cin>>s1>>s2;
        flag=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='?' || s2[i]=='?'){
                continue;
            }
            else{
                if(s1[i]!=s2[i]){
                   flag=1;
                   cout<<"No"<<endl;
                   break;
                }
            }
        }
        if(flag==0){
            cout<<"Yes"<<endl;
        }
    }
	return 0;
}
