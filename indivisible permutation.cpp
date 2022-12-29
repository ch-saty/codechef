#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int s;cin>>s;
		int ar[s];int x=s;
		if(s%2==0){
			for(int i=1;i<=s;i+=2){
				ar[i]=i+1;
				ar[i+1]=i;
			}
		}
		else{
			for(int i=1;i<=s;i+=2){
				ar[i]=i+1;
				ar[i+1]=i;
				if(ar[i]>=s) 
					ar[i]--;
					else if(ar[i+1]>=s)
					ar[i+1]--;
			}
			int t=ar[1];
			ar[1]=ar[s];
			ar[s]=t;
		}
		for(int i=1;i<=s;i++){
			cout<<ar[i]<<"  ";
		}
		cout<<endl;
	}
}

