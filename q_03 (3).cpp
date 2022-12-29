#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		int a;cin>>a;
		int ar[a];
		for(int i=0;i<a;i++){
			cin>>ar[i];
		}
		int odd=0, even=0,x=0;
		for(int i=0;i<a;i++){
			if(ar[i]%2==0)
				even++;
			else
				odd++;
		}
		for(int i=1;i<a+1;i++){
			if(i%2==0 && odd!=0){
				odd--;
				x++;}		
			else if(i%2!=0 && even!=0){
				even--;
				x++;}
		}
		cout<<x<<endl;
	}
}
