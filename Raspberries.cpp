#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k, f=0, even=0, op=0;
        cin>>n>>k;
        vector<int>v(n);
        vector<int>diff(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]%k==0){
                f=1;
            }
            diff[i]=(((v[i]/k)*k)+k)-v[i];
            if(v[i]%2==0) even++;
            if((v[i]+1)%4==0){
                op=1;
            }
        }
        if(f==1) cout<<0<<endl;
        else{
            if(k==4){
                if(even>=2) cout<<0<<endl;
                else if(op!=0) cout<<op<<endl;
                else if(even==0) cout<<2<<endl;
                else cout<<1<<endl;
            }else{
                cout<<*(min_element(diff.begin(), diff.end()))<<endl;
            }
        }
    }
}
