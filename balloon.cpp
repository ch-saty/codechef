#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n,sum=0,count=0;
		cin>>n;
		int a[n];
		for(int j=1;j<=n;j++){
			cin>>a[j];}
		
		for(int j=1;j<=n;j++){
			if(a[j]==1 || a[j]==2 || a[j]==3 || a[j]==4 || a[j]==5 || a[j]==6 || a[j]==7)
				sum+=a[j];
				count++;
			if(sum==28){
				break;
			}
		}	
		cout<<count<<endl;
	}
}
