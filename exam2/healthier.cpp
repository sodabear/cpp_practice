#include <iostream>
using namespace std;
int pan[50001];


int main(){
		int n,d;
		// n is number of panzi
		cin >> n >> d;
		int ci,ki;
		// day = 0
		if(d == 0){
			
			for(int i = 1; i <= n; i++){
				cin>>ci>>ki;
				pan[i] = ((ci %4) * (ki % 4)) % 4;
			}
			int sum = 0; 
			for(int i = 1; i <= n;i++){
				sum = (sum + pan[i]) %4;
			}
			cout << sum <<endl;
			return 0;

		
		}
		
		
		//day not equal 0	
		for(int i = 1; i <= n; i++){
			int temp = 0;
			cin>>ci>>ki;
		// ki  % 4 = 0
		// ki  % 4 = 1
		// ki  % 4 = 2
		// ki  % 4 = 3
			if(ki % 4 == 0){
				 temp = 0;	
			}else if(ki % 4 == 1){
				 temp = 1;
			}else if(ki % 4 == 2){
				if(d == 1){
					temp = 2;
				}else{
					temp = 0;
				}		
			}else{
				if(d & 1){
					temp = 3;
				}else{
					temp = 1;
				}
				
			}		
			pan[i] = ((ci%4) *temp) % 4;
		}				
		int sum = 0; 
		for(int i = 1; i <= n;i++){
			sum = (sum + pan[i]) %4;
		}
		cout << sum <<endl;
		return 0;
	
	
	
	
}	


