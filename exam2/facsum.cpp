#include <iostream>
using namespace std;
long long a[1000001];
int main(){
	long long n,m;
	cin >> n >> m;
	a[0] = 1;
	for(int i =1; i <= n; i++){
		a[i] = ((a[i-1] % m) * (i % m)) % m;			
	}
	a[0] = 0;	
	for(int i =1; i <= n; i++){
		a[i] = (a[i] + a[i-1]) % m;	
	}	
	cout << a[n] <<endl;
	return 0;
}
