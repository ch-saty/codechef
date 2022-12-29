#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a,b,c,d;cin>>a>>b>>c>>d;
		int x=0;
		int s1=a+b;
		int s2=c+d;
		/*3
1 1 8 8
5 7 5 8
3 3 3 3
*/		
		if(s1%2==0){
			if(s2%2==0)
				x=2;
			else
				x=1;
		}
		else{
			if(s2%2==0)
				x=1;
			else
				x=2;
		}
		
		if(a==b && b==c && c==d){
			x=0;
		}
		else if(a==c || b==d){
			x=1;
		}
		else if(){
			x=1;
		}
	cout<<x<<endl;
	}
}
