#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a[5],I=0,e=0;
		for(int i=0;i<5;i++){
			cin>>a[i];
			if(a[i]==1)
				I++;
			else if(a[i]==2)
				e++;
		}
		if(I>e)
			cout<<"INDIA"<<endl;
		else if(e>I)
			cout<<"ENGLAND"<<endl;
		else
			cout<<"DRAW"<<endl;
	}
}
