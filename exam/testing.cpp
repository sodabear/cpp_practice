#include <iostream>
using namespace std;

int main(){
		int arr[7] = {0,4,1,1,1,1,4};
		int k[1000];
		fill_n(k, 1000, 1);
		for(int i = 1;i<= 6;i++){
			if(k[arr[i]] == 4){
				cout <<"t"<<endl;
				cout <<"t"<<endl;
				
			}
			cout<< arr[i]<< "  " <<k[arr[i]]<<endl;
			k[arr[i]] = k[arr[i]] + 1;	
		}
		cout <<"f"<<endl;
		return 0;		
	}
		
