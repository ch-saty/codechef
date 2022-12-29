#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n <= 1)
        return false;
  
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],x=0,ans=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(prime(a[i])){
				x++;
				ans=max(ans,x);
			}
			else 
				x=0;
		}
		if(x>1){
			cout<<ans<<endl;
		}	
		else
			cout<<"-1"<<endl;
		
	}
}

