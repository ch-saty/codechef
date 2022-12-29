#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}
int fgcd(int arr[],int n){
	int ans=arr[0];
	for(int i=1;i<n;i++){
		ans=gcd(arr[i],ans);
		if(ans==1)
			return 1;
		
	}
	return ans;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++){
			cin>>ar[i];
		}
		sort(ar,ar+n);
		
		int re=fgcd(ar,n);
		ar[n-1]=re;
		
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=ar[i];
		}
		cout<<(sum/re)<<endl;
	}
}
