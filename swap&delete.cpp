#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int z=0, o=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0') z++;
            else o++;
        }
        if(z==o){
            cout<<0<<endl;
            continue;
        }
        int cnt=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0') {
                if(o==0) break;
                o--;
            }
            else {
                if(z==0) break;
                z--;
            }
            cnt++;
        }
        
        cout<<s.length()-cnt<<endl;
    }
}
