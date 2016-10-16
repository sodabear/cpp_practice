#include <iostream>
using namespace std;
int main(){
	int n,m,q;
	int z[1001][1001] = {};
	int s[1001][1001] = {};
	cin >> n >> m >> q;
	//read matrix
		for(int i= 1;i <= n; i++){
		for(int j = 1; j <=m;j++){
			cin >> z[i][j];
			
		}	
		}	
	
	for(int i= 1;i <= n; i++){
		for(int j = 1; j <=m;j++){
			int sum =0;
			for(int k = 1; k <=i; k++){
				for(int l =1; l <= j; l++){
					sum = (sum + z[k][l] % 1234) % 1234 ;
				}
			}
			s[i][j] = sum % 1234;
			//cout << s[i][j] << " " ;		
		}
		cout <<endl;
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
		//cout << (1234 + sum) % 1234 <<endl;
	}	
	
	
	
	
}
