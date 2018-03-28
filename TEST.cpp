#include <iostream>
using namespace std;
 
int main()
{
  int a;
  do{
      cin>>a;
      if(a==42 || a<0 ||a>99){
          break;
      }
      cout<<a<<endl;
  }
 while(a!=42);
  
  return 0;
}
