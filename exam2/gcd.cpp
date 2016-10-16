#include <iostream>
using namespace std;
int a[10000];
int main(){
	int n;
	cin >> n;
	
	for(int i =1 ; i <= n;i++){
		cin >> a[i];
	}	
	for(int i =1 ; i <= n;i++){
		a[i+1] = gcd(a[i],a[i+1]);
	}
	
	
	
	
	
	//cout << a[a]
	cout < 15 << endl;
	return 0;
}
