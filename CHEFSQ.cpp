#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int t,n1,n2,a;
    string s,s1,num;
    cin>>t;
    while(t--){
        cin>>n1;
        s = "";
        s1 = "";
        for(int i=0;i<n1;i++){
            cin>>num;
            s=s+num+'.';
        }
        cin>>n2;
        for(int i=0;i<n2;i++){
            cin>>num;
            s1=s1+num+'.';
        }
        if(s.find(s1)!=string::npos)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
  }
  return 0;
}  
