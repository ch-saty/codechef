#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		if(n%2==0){
			if(k>n/2)
				cout<<(n-2)<<endl;
			else
				cout<<(n-k)*2<<endl;
		}
		else{
			if(k>=(n+1)/2)
				cout<<(n+1)<<endl;
			else
				cout<<(n-k)*2<<endl;		
		}
	}
}



