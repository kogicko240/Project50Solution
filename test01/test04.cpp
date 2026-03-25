#include <iostream>
using namespace std;


int sum(int array[], int size) {
	if(size <= 0){
	return -1;
}


	//base case
	if (size == 1) {
		return array[0];
	}


	//recursion case
	size--;
	return array[size] + sum(array, size);
}




int main() {
	int array[]{ 1,2,3,4,5,6,7,8,9 };
	cout << sum(array,9) << endl;
	return 0;
}