#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter num: ";
	cin >> n;
	
	int original = n;
	
	for (int i = 1; i <= original; i++){
		if (n < 2) break;
		else if (n >= 2){
			if ((n-1)%i == 0) cout << n;
		}
		else continue;
		n--;
		}	
	}
