#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    cin>>n;
    int arr[n];
    while(t--){
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        bool check = false;
        for(int i =0; i<n; i++){
            if(arr[i]!=arr[i+1]){
                check = true;
                break;
            }
            
        }
        if(check){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        
    }
    
    return 0;
}