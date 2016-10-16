
#include <iostream>
using namespace std;
int n;
int main(){
	// trick is to used if(a[i][j] ==0) to remove on dupliate
	cin >> n;
	int c =1;
	int ans[100][100] = {};
	// i = 0 1 2
	for(int i = 0; i < n/2; i++){
		//if n =6 ; i = 0 ; we have 1 2 3 4 5 6
		for(int j = 0; j < n-i; j++){
			if(ans[i][j] == 0){
				// insert value first and then increase value
				ans[i][j] = c++;
			}
		}
		// we have 7 8 9 10 11; fix a[?][5];
		for(int j = i+1; j < n-i; j++){
			if(ans[j][n-1-i] == 0){
				ans[j][n-1-i] = c++;
			}

		}
		// j > i
		// n - i - 1 means start from left down corner 
		for(int j = n-1-i; j >i; j--){
			if(ans[n-1-i][j] == 0){
				ans[n-1-i][j] = c++;
 			}
		}

		for(int j = n-1-i; j > i; j--){
			if(ans[j][i] == 0){
				ans[j][i] = +;
 			}
		}
	}
	 if(n%2==1)  
        ans[n/2][n/2]= c; 	

	for(int i = 0; i < n; i++){
		for(int j =0; j< n; j++ ){
			cout << ans[i][j]<< " ";
		}
		cout << endl;
	}
							
	

	return 0;

}
