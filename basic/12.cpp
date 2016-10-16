/**
12. 
同上，输出如下花纹，n为边长
注意图案多出来的边框的部分，左边比右边多，下边比上边多）

.../\..
../  \.
..\  /.
...\/..
.......

**/


#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++ ){
		for(int j = i-2; j < n; j++)
			cout << ".";	
		cout << "/";
		for(int j = 1; j < i*2 -1; j++)
			cout << " ";
		cout<< "\\";	
		for(int j = i-1; j < n; j++)
			cout << ".";
		
		cout << endl;
	}
	for(int i = n; i >= 1;i-- ){
		
		for(int j = i-2; j < n; j++)
			cout << ".";
			
		cout << "\\";
		for(int j = 1; j < i*2 -1; j++)
			cout << " ";
		
		cout<< "/";	
		for(int j = i-1; j < n; j++)
			cout << ".";
		
		cout <<endl;	
	
	}
	for(int i = 2*n+3; i >= 1;i-- )
		cout<<".";
	cout <<endl;	
	
}
