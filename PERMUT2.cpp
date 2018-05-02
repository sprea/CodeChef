#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    while (n != 0){
        int j,flag = 0;
        int arr[n],arr1[n];
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        for(int i=1; i<=n; i++){
            j = arr[i];
            arr1[j]=i;
        }
        for(int i=1; i<=n; i++){
          if(arr[i]!=arr1[i]){
            cout<<"not ambiguous"<<endl;
            flag = 1;
            break;
          }
        }
        if(flag == 0)
            cout<<"ambiguous"<<endl;
    cin >> n;
    }
	return 0;
}
