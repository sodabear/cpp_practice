#include <iostream>
using namespace std;
int N,Q,M =0;
int A[100000];
int main(){
	cin >> N >> Q >> M;
	for(int i =1; i<=N;i++){
		cin >> A[i];
	}
	int boo = 0;
	int L,R,V =0;
	
	for(int j =1; j <= Q; j++){
		cin >> boo;
		if(boo == 0){
			cin >>L>>R>>V;
			for(int i=L;i <=R;i++){
				A[i] = A[i]+ V;	
			}		
		}else{
			int sum =0;
			cin >>L>>R;
			for(int i=L;i <=R;i++){
				sum = sum + A[i];
			}
			sum = sum % M;
			cout << sum << endl;
		}		
	}
	return 0;	

	}	


