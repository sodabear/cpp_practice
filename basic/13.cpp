#include <iostream>
using namespace std;

char a[] = "/\\  ";
char b[] = "\\/  ";
int main(){
	int n;
	cin >> n;
	for(int i=1; i <= n; i++){
		for(int j= 1; j <= n-i; j++){
			cout<< " ";
		}
		for(int j= 0; j< i; j++ ){
			cout << a[j%4];		
		}
		for(int j = -i+1 ; j <= 0; j++ ){
			cout << b[(4 - j%4) %4];		
		}
		for(int j= 1; j < n-i; j++){
			cout<< " ";
		}
		cout << endl;
	}
	
	
	
	return 0;	
}
