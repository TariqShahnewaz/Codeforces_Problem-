#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s, x;
        cin >> n >> s >> x;
        int a[n];
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];           
            sum+=a[i];
        }
        while(sum<s){
            sum += x;
        }
          if(sum==s){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
    }


    return 0;
}