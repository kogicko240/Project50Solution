#include <iostream>
using namespace std;


long long fibonachi(int index) {
	if (index <= 0) {
		return -1;
	}

	//base case
	if (index <= 2) {
		return index - 1;
	}

	// recusion case
	return fibonachi(index - 1) + fibonachi(index - 2);

}


int main() {
	cout << fibonachi(11)<< endl;
	return 0;
	}