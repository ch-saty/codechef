#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int x,y;cin>>x>>y;
		if((x+y)%2!=0){
			cout<<((abs(x-y+1)/2)+1)<<endl;
		}
		else{
			cout<<abs(x-y)/2<<endl;		
		}
	}
}
