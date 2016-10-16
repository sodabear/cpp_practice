#include <iostream>
using namespace std;
int main(){
	int n,m,q;
	int z[1000][1000] = {};
	cin >> n >> m >> q;
	//read matrix
	for(int i= 1;i <= n; i++){
		for(int j = 1; j <=m;j++){
			cin >> z[i][j];
		}
	}
	
	int sum =0;
	for(int i=1; i <= q; i++){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		for(int j = a; j <= c; j++){
			for(int k = b; k <= d; k++){
				sum = (sum % 1234 + z[j][k] % 1234) % 1234;
			}
		}	
		cout << (1234 + sum) % 1234 <<endl;
		sum = 0;
	}	
	
	
	
	
}
