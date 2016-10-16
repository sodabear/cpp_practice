/**
同上 输出如下方阵
1 2 3 4 3 2 1
2 3 4 0 4 3 2
3 4 0 0 0 4 3
4 0 0 0 0 0 4
3 4 0 0 0 4 3
2 3 4 0 4 3 2
1 2 3 4 3 2 1
**/
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	//edge case first line
	for(int j = 1; j <=n; j++){
		cout << j << " ";
	}
	for(int j = n-1; j >=1; j--){
		cout << j << " ";
	}
	cout << endl;
	// copy from the tail of last line 
	// shift tab to indent
	for(int i = 1; i < n; i++ ){
		//print 4 line
		for(int j = 1+i; j <=n; j++){
			cout << j << " ";
		}
		//print 4 line
		// j < 1 3 5 7 9 ...	
		for(int j = 1; j <= i*2-1; j++){
			cout << 0 << " ";
		}
		//print 4 line	
		for(int j = n; j >= i+1; j--){
			cout << j << " ";
		}
		cout << endl;	
	}
	//lower part 	
	for(int i = n-1; i > 1; i-- ){
		for(int j = i; j <= n; j++){
			cout << j << " ";
		}
		for(int j = 2*(i-1) -1 ; j > 0; j--){
			cout << 0 << " ";
		}
		for(int j = n; j >=i; j--){
			cout << j << " ";
		}
		cout << endl;
	}
	//edge case last line
	for(int j = 1; j <=n; j++){
		cout << j << " ";
	}
	for(int j = n-1; j >=1; j--){
		cout << j << " ";
	}
	cout << endl;
	
	return 0;
	
}
