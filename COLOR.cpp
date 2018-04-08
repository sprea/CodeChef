#include <iostream>

#include <string>

using namespace std;

int main()

{

string s;

int t,r,g,b,max,size;

cin>>t;

while(t!=0){

cin>>size;

cin>>s;

r=0;b=0;g=0;

for(int i=0;i<size;i++){

if(s[i]=='R'){

r+=1;

}

else if(s[i]=='G'){

g+=1;

}

else if(s[i]=='B'){

b+=1;

}

}

max=((r>b)?(r>g?r:g):(b>g?b:g));

cout<<size-max<<endl;

t--;

}

return 0;

}

