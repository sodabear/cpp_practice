#include <iostream>
using namespace std;
int a[10000];

int gcd(int a , int b){
	if (b == 0){
		return a;
	}	
	return gcd(b, a %b);
}
int main(){
	int n;
	cin >> n;
	
	for(int i =1; i <= n;i++){
		cin >> a[i];
	}	
	for(int i =1; i+1 <= n;i++){
		a[i+1] = gcd(a[i],a[i+1]);
	}
	cout << a[n] << endl;
	return 0;
}
