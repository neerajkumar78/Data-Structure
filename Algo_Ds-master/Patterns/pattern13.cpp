#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	int count = 1;

	char spaces = ' ';
	for( int i = 1; i <= n; i++ ){
		for( int j = 1; j < i; j++ ){
			cout << spaces;
		}
		for( int j = n; j >= i; j-- ){
			cout << count;
			count++;
		}
		cout << endl;
	}

    return 0;

}

/* 
3 
 
123
 45
  6

*/
