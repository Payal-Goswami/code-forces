#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
    	int n=50000;
    	int d; cin>>d;
    	vector<int>isPrime(n+1, 1);
    	for(int i=2; i<=n; i++){
    	    if(isPrime[i]){
    	        int k=2;
    	        while(i*k<=n){
    	            isPrime[i*k]=0; k++;
    	        }
    	    }
    	}
        
        long long ans=1;
        int cnt=0;
        for(int i=1; i<=n; i=i+d){
            if(cnt==3) break;
            while(i<=n && isPrime[i]==0) i++;
            ans*=i; cnt++;
        }
        cout<<ans<<endl;
	}
    
}
