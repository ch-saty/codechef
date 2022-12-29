#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;string s;
		cin>>n>>s;
		int c=0;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				char x1,x2;
				x1=s[i],x2=s[j];
				int x,y;
				x=x1-'0';
				y=x2-'0';
				if(j-i==abs(y-x))
					c++;
			}
		}
		cout<<c<<endl;
	}
}
