#include<bits/stdc++.h>
using namespace std;
void coloring(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0; i<n; i++){ 
        cin>>a[i];
    }
    int count = 0;
    for(int i =0; i<n; i++){
         count += (a[i]%2 != (i+1)%2);
    }
    if(count == n)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        coloring();
    }
return 0;
}
