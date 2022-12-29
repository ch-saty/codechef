#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a,b,x;
		cin>>x>>a>>b;
		int m=2;
		int c=0;
		while(x!=0){
			if(x%2==0 && a<=0){
				cout<<a<<endl;
				break;
			}
			else if(x%2!=0 && b<=0){
				cout<<b<<endl;
				break;	
			}
			else{
				if(x%m==0){
					if(m%2==0){
						c+=a;
					}
					else
						c+=b;
				}
				m++;
				x/=m;
			}
		}
		cout<<c<<endl;
	}
}
