#include<bits/stdc++.h>
using namespace std;
int sumof(int a){
	if(a<10)
	return a;
	else
	return a%10 + sumof(a/10);
}
int main(){
	int n,res;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		cout<<sumof(a)<<"\n";			
	}
}

