#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
    int t,n;
    scanf("%d", &t);
    while(t--) {
        int p=0,i=1;
        scanf("%d", &n);
        do{
            p=p+i;
            i++;
        }while(p+i<=n);
        cout<<i-1<<endl;
    }
    return 0;
}
