#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		
		if(k==n-1)
			cout<<"-1";
			
			
		else if(k==n){
			for(int i=1;i<=n;i++)cout<<i<<" ";
				cout<<"\n";
			
		}
		else{
			for(int i=1;i<=k;i++)
				cout<<i<<" ";
			
			for(int i=k+2;i<=n;i++)cout<<i<<" ";
			cout<<k+1<<"\n";
		
		}
	}
}

