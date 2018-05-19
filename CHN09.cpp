#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t,ac,bc;
    string s;
    cin>>t;
    while (t--){
        cin>>s;
        ac=0;bc=0;
        for(int i=0;i<s.length();i++){
            switch(s[i]){
                case 'a':
                    ac++;
                    break;
                case 'b':
                    bc++;
                    break;
            }
        }
        if(ac<=bc)
            cout<<ac<<endl;
        else
            cout<<bc<<endl;
    }
	return 0;
} 
