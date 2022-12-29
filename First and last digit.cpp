#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int n,ans;
		cin>>n;
		int size=0,x;
		while(n!=0){
				x=n%10;
				n=n/10;
				size++;
				}
			cout<<size;		
		}
}
