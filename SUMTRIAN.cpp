#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t,n;
    cin>>t;
    while (t--){
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                //cout<<arr[i][j]<<" "<<i<<j<<" ";
                if(arr[i][j]>arr[i][j-1])
                    arr[i-1][j-1]=arr[i-1][j-1]+arr[i][j];
                else
                    arr[i-1][j-1]=arr[i-1][j-1]+arr[i][j-1];
            }
           // cout<<endl;
        }
        cout<<arr[0][0]<<endl;
        
    }
	return 0;
} 
