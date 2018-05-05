#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string d;
    cin>>n;
    while (n--){
        cin>>d;
        int flag = 0;
        if(d[0]==d[1]){
            //cout<<d[0]<<d[1]<<endl;
            cout<<"NO"<<endl;
            flag = 1;
        }
        else{
        for(int i=0; i<d.length()-2;i++){
            if(d[i] != d[i+2]){
                //cout<<d[i]<<d[i+2]<<endl;
                cout<<"NO"<<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"YES"<<endl;
        }
        }
    }
	return 0;
}
