#include<bits/stdc++.h>
using namespace std;
void Table(){
    int n, h, l;
    cin>>n>>h>>l;
    if(h>l)
    swap(h, l);

    int x;
    int count=0, count1=0;

    for(int i=0; i<n; i++){
        cin>>x;
        if(x<=h) count++;
        
        if(x<=l) count1++;

    }
    cout << min(count, count1/2)<<'\n'; 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Table();
    }
    return 0;
}