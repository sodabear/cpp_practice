#include <iostream>
using namespace std;
int N = 0 ,Q=0,M =0;
int A[100000];
int B[100000];
int main(){
	cin >> N >> Q >> M;
	for(int i =1; i<=N;i++){
		cin >> A[i];
		A[i] = A[i] % M;
	}
	B[0] = 0;
	for(int i = 1; i <= N; i++){
		B[i] = (B[i-1]% M +A[i]) % M ; 
	}
	
	int boo = 0;
	int L,R,V =0;
	
	for(int j =1; j <= Q; j++){
		cin >> boo;
		if(boo == 0){
			cin >>L>>R>>V;
			for(int i=L;i <=R;i++){
				A[i] = (A[i] + V % M) % M;
			}
			// dont forgot to use mod
			for(int i = 1; i <= N; i++){
				B[i] = (B[i-1] % M  + A[i]) % M;
			}	
		}else{
			cin >> L>> R;		
			cout <<  (M +(B[R] - B[L-1]) % M) % M << endl;
		}		
	}
	return 0;	

	}	


