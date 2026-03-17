#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin>>p[i];

    int num = n;
    int l = -1;
    for(int i=0; i<n; i++){
        if(p[i]!=num){
        l = i;
        break;
        }
        num--;
    }
    if(l!=-1){
        int r;
        for(int i=0; i<n; i++){
        if(p[i] == num){
                r=i;
                break;
            }
        }
        reverse(p.begin()+l, p.begin()+r+1);
    }
    for(int i=0; i<n; i++) {
        cout<<p[i]<<" ";
    }
    cout<<"\n";
    
}
int main(){
    int t =1;
    cin>>t;
    while(t--) {solve();}

    return 0;
}