#include <iostream>
using namespace std;
int n,m,q;
int z[1001][1001] = {};
int s[1001][1001] = {};
int main(){
	cin >> n >> m >> q;
	//read matrix
	for(int i= 1;i <= n; i++){
			for(int j = 1; j <=m;j++){
				cin >> z[i][j];
		}
	}
	// need two matrix, one store original value 
	// the other store pre order sum
	for(int i= 1;i <= n; i++){
		for(int j = 1; j <=m;j++){
			s[i][j] = (( (z[i][j] + s[i-1][j]) % 1234 + s[i][j-1]) %1234 - s[i-1][j-1]) %1234;
		}	
	}	
	
	
	
	
	
	for(int i=1; i <= q; i++){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		int sum =0;
		//for(int j = a; j <= c; j++){
		//	for(int k = b; k <= d; k++){
				//sum = (sum % 1234 + z[j][k] % 1234) % 1234;
		sum = ( (s[c][d] + s[a-1][b-1])% 1234  - ( (s[c][b-1] + s[a-1][d]) % 1234) )% 1234;
		//	}
		//}	
		//cout << "~~~~~~~~";
		//cout << s[c][d] << " " << s[a][b] << " "<<s[c][b]<<"  "<<s[a][d]<<"  "<<endl;
		cout << (1234 + sum) % 1234 <<endl;
	}	
	
	
	
	
}
