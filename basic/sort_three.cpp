#include<iostream>
using namespace std;
 
 int main(){
	int a =0,b=0,c=0;
	cin >>a >>b >>c; 
	if(a > b){
		if(b > c){
			cout << c << " "<< b << " "<< a <<endl;
		}else{
			if (c > a){
				cout << b<< " " << a<< " " << c << endl;
			}else{
				cout << b<< " " << c<< " " << a << endl;
			}
		}	
    }else{
       	if (b > c){
 			if(a < c){
				cout << a<< " " << c<< " " << b <<endl;
            }else{
				cout << c<< " " << a<< " " << b <<endl; 
			}	 
		}else{
			cout << a<< " " << b<< " " << c <<endl;
		}
		
	} 	
	return 0;
	
}
