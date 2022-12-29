#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int D,P,Q,d,sum=0;
		cin>>D>>d>>P>>Q;
		int i=0;
		while(D--){
			++i;
			sum+=P;
			if(i%d==0){
				P+=Q;
			}
			
		}
		cout<<sum<<endl;
	}

}
