#include<iostream>
using namespace std;

bool isPrimeNumber(int number) {

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

int main() 
{
	int number;
	cout << "Enter the number: ";
	cin >> number;

	bool isPrimeFlag = isPrimeNumber(number);

	if (isPrimeFlag) 
		cout << "It is prime number!" << endl;
	else
		cout << "It is not prime number!" << endl;

	system("pause>0");
}
