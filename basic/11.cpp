/**
11. 同上，输出如下花纹，n为边长

 ../\..
 ./  \ .
 /    \
 \    /
 .\   /.
 ..\ /..

**/
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++ ){
		for(int j = i; j < n; j++)
			cout << ".";	
		cout << "/";
		for(int j = 1; j < i*2 -1; j++)
			cout << " ";
		cout<< "\\";	
		for(int j = i; j < n; j++)
			cout << ".";
		
		cout << endl;
	}
	for(int i = n; i >= 1;i-- ){
		
		for(int j = i; j < n; j++)
			cout << ".";
			
		cout << "\\";
		for(int j = 1; j < i*2 -1; j++)
			cout << " ";
		
		cout<< "/";	
		for(int j = i; j < n; j++)
			cout << ".";
		
		cout <<endl;	
	
	}
	
}
