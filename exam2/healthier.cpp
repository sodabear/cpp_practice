#include <iostream>
using namespace std;
int pan[50001];


int main(){
		int n,d;
		// n is number of panzi
		cin >> n >> d;
		int ci,ki;
		for(int i = 1; i <= n; i++){
			int temp = 0;
			cin>>ci>>ki;
		// if d is even: ki even^even % 4 = 0
		// if d is even: ki even^odd  % 4 = 2
		// if d is odd:  ki odd^even  % 4 = 1
		// if d is odd:  ki odd^odd   % 4 = 3
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


