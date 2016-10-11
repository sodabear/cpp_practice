#include <iostream>
using namespace std;
int N,M,K =0;
int A[501][501] ={};


int main(){
	cin >> N >> M >> K;
	int x1,y1,x2,y2 = 0;
	while(K > 0){ 
		cin >> x1 >> y1 >> x2 >> y2;
		for(int i = min(x1,x2); i <=max(x1,x2); i++){
			A[i][y1] = 1; // xy A[x][y]
		}	
		for(int j = min(y1,y2); j <= max(y1,y2); j++){
			A[x2][j] = 1;
		}		
		K--;
	}
	for(int j = N; j >= 1 ;j--){
		for(int i = 1; i <= M; i++){
			if(A[i][j] == 0){
				cout<<0;
			}else{
				cout<< " ";
			}			
		}
		cout<<endl;
	}
	return 0;	
}
