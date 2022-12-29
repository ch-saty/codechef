#include<bits/stdc++.h>
using namespace std;

int ch(int x){
	int c=0;
	
	while(x%2==0){
		x/=2;
		c++;
	}
	
	return c;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n,y,q=INT_MAX,z;
		cin>>n;
		int ar[n],b[n];
		
		for(int i=0;i<n;i++){
			cin>>ar[i];
		}
		
		for(int i=0;i<n;i++){
			y=ch(ar[i]);
		// cout<<y<<endl;
			b[i]=y;
		
		}
		
		for(int i=0;i<n;i++){
			q=min(q,b[i]);
			}
		cout<<q<<endl;
	}
}
