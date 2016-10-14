#include <iostream>
using namespace std;
int A[10] = {};

	//helper
	bool Is_DuiTang(int size, int arr[]){

		int k[1000] ={};
		for(int i = 1 ; i<=6;i++ ){
			if(k[arr[i]] == 0){
				k[arr[i]] = 1;
			}else{
				return 0;	
			}		
		}
		return 1;		
		
	}
	
	//helper
	int numberOfX(int target, int arr[]){
		int count =0;
		for(int i =1 ; i <= 6;i++ ){
			if(arr[i] == target){
				count++;
			}
		}	
		return count;
	}
	
	//某个点数出现恰好四次，且不是状元
	// how to use sort to do this ? 
	int fourOfX(int arr[]){
		int k[1000];
		fill_n(k, 1000, 1);
		for(int i = 1;i<= 6;i++){
			if(k[arr[i]] == 4){
				return 1;
			}
			k[arr[i]] = k[arr[i]] + 1;	
		}
		return 0;		
	}
		

int main(){
	int total = 0;
	cin >> total;
	
	
	while(total > 0){
		total--;
		//read next t
		for(int i =1; i <=6; i++){
			cin >> A[i];
		}
		//cout << "1"<<endl;
		if(Is_DuiTang(6, A)){
		//cout << "2"<<endl;
			cout << "對堂"<<endl;
		}else{
		//cout << "3"<<endl;	
			if(numberOfX(4, A) == 4){
				if(numberOfX(1,A) == 2){
					cout <<"狀元插金花"<<endl;				
				}else{
					cout <<"狀元"<<endl;
				}
			}else if(numberOfX(4,A) == 3){
				cout <<"三紅"<<endl;
				continue;		
			}else if(fourOfX(A)){
				//cout << " inside"<<endl;
					if(numberOfX(4, A) == 2){
						cout << "四進帶二舉"<<endl;
						continue;
					}
					if(numberOfX(4, A) == 1){
						cout << "四進帶一秀"<<endl;
						continue;
					}	
			}else if(numberOfX(4,A) == 2){
				cout <<"二舉"<<endl;
				continue;		
			}else if(numberOfX(4,A) == 1){
				cout <<"一秀"<<endl;
				continue;
			}
			cout << "不求獎品，開心就好"<<endl;
		}
		
	}
	return 0;			
}

