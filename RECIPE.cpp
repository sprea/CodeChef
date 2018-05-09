#include <bits/stdc++.h>
using namespace std;
 
int lcm(int a,int b){
    if(a%b==0)
        return b;
    else
        lcm(b%a,a);
}
 
int main() {
    int t,n,result;
    cin>>t;
    while (t--){
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
             cin>>arr[i];
        }
        result=arr[0];
        for(int i = 1; i<n; i++){
            result = lcm(result,arr[i]);
            if(result==1){
                break;
            }
        }
        for(int i = 0; i<n; i++){
            cout<<arr[i]/result<<" ";
        }
    cout<<endl;
    }
	return 0;
}
