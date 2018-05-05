#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string d;
    cin>>n;
    while (n--){
        cin>>d;
        int b=d.length();
        int ocnt=0,zcnt=0;
        for(int i=0;i<d.length();i++){
            if(d[i]-'0'==0){
                zcnt++;
            }
            else
            ocnt++;
        }
        if(zcnt == 1 && ocnt == 1 && b == 2)
            cout<<"Yes"<<endl;
        else if(zcnt == 1 || ocnt == 1){
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
	return 0;
}
 
