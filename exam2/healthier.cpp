#include <iostream>
using namespace std;
int pan[50001];
int main(){
		int n,d;
		cin >> n >> d;
		int ci,ki,temp;
		for(int i = 1; i <= n; i++){
			cin>>ci>>ki;
			temp = 1;
			for(int j =1 ; j <= d; j++){
				temp = (ki *(temp % 4) %4);	
			}
			pan[i] = (temp* (ci %4)) %4;
		}	
		int sum = 0;
		for(int i = 1; i <= n;i++){
			sum = (sum + (pan[i] %4) %4);
			
		}
		cout << sum <<endl;
		return 0;
	
	
	
	
}	

