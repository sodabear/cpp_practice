#include <iostream>
using namespace std;
int pan[50001];
int fastpower(int a ,int b, int mod){
	int ans =1;
	b = b % mod;
	while(a > 0){
		if(a & 1){
			ans = (ans * b) % mod;
		}
		a = a>>1;
		b = (b * b) % mod;
		
		}
	return ans;			
}

int main(){
		int n,d;
		cin >> n >> d;
		int ci,ki,temp;
		for(int i = 1; i <= n; i++){
			cin>>ci>>ki;
			temp = 1;
			temp = fastpower(d,ki,4);
			pan[i] = (temp* (ci %4)) % 4;
		}	
		int sum = 0;
		for(int i = 1; i <= n;i++){
			sum = (sum + (pan[i] %4)) %4;
			
		}
		cout << sum <<endl;
		return 0;
	
	
	
	
}	

