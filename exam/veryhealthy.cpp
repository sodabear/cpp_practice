#include <iostream>
using namespace std;

int num,day =0;
int main(){
	cin >> num >> day;
	int total = 0;
	while(num > 0){
		int p,k;
		cin >> p >> k;
		int ans = 1;
		for(int j=0; j< day; j++){
			ans = ans*k;
		}	
		total = total + p*ans;
		num--;
	}
	cout << total % 2 << endl;
	return 0;
}
