#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],ce=0,x=0,y=0,co=0,no;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]%2!=0){
				co++;
				x=max(co,x);
			}
			else
				co=0;
		}
		for(int i=0;i<n;i++){
			if(a[i]%2==0){
				ce++;
				y=max(ce,y);
			}
			else
				ce=0;
		}
		int z=max(x,y);
		string num[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
		if(z<10){
			cout<<num[z];
		}
		else{
			while(z!=0){
				no=z%10;
				cout<<num[no];
				z/=10;
			}
		}
		cout<<"\n";
		
	}
}

