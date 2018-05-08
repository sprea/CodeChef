#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,p,x1,y1,x2,y2,x3,y3;
    double d12,d23,d13;
    cin>>n;
    bool a,b,c;
    while (n--){
        cin>>p;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        d12=sqrt(pow((x2 - x1),2)+pow((y2 - y1),2));
        d23=sqrt(pow((x3 - x2),2)+pow((y3 - y2),2));
        d13=sqrt(pow((x3 - x1),2)+pow((y3 - y1),2));
        //cout<<d12<<d23<<d13<<endl;
        a = (d12<=p);
        b = (d23<=p);
        c = (d13<=p);
        //cout<<a<<b<<c<<endl;
        bool cond=a?(b||c):(b&&c);
       // cout<<cond<<endl;
        if(cond)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        
    }
	return 0;
}
