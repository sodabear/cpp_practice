#include <iostream>
using namespace std;

int num,day =0;
int main(){
	cin >> num >> day;
	int total = 0;
	if(day == 0){
		for(int i = 0; i < num; i--){
			int c;
			cin >> c;
			cout << c % 2 << endl;
			return 0;
		}	
	}	
	while(num > 0){
		int c,k;
		cin >> c >> k;
		//odd * odd * odd= odd
		// even * even *even= even
		if(c%2 ==0 or k % 2 ==0){
			total = total + 0;
		}else{
			total = total + 1;
		}		
		num--;
	}
	cout << total % 2 << endl;
	return 0;
}
