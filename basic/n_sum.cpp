#include <iostream>
 using namespace std;
 
  int  main(){
	int n =0;
	int ans =0;
	int temp=0;
    cin >> n; 
	for(int i =0; i < n; i++){
		cin >> temp;
		ans = ans + temp;
	}
		cout << ans<<endl;
	return 0;
}

