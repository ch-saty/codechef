#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int c,sum=0,b=1;
		int ar[3];
		for(int i=0;i<3;i++)
			cin>>ar[i];
		cin>>c;
		for(int i=0;i<3;i++){
			sum+=ar[i];
			if(sum>c)
				b++;
		}
		cout<<b<<endl;
	}
}

