//	Lab 5-11 : Problem Definition
//	Make a program that find the prime numbers in the given range.
//		example) find the prime numbers in the range [1..100]
//		2, 3, 5, 7, ... , 97

#include <iostream>
using namespace std;

int main()
{
	int begin, end;
	//bool isPrime;
	do
	{
		cout << "Enter your range [from, to] \n";
		cin >> begin >> end;
	} while (begin >= end || begin < 2 || end < 0);

	//loop iteration starts at begin, continues to loop until i <= end, and increasing i++ after every iteration.
	
	for (int i=begin;i<=end;i++){ 
		// isPrime = true;
		//Make a loop that does the prime number math, smallest divisible numbers in the range of 2-100 is 2,3,5 and 7. Therefore if any number in the range of 2-100 is divisible by 2,3,5 and 7, it is not a prime number.
		
			for (int j=2;j<=7;j++){
			// i % j;
			// cout << i << " " << j << endl;
				if (i != j && i % j == 0){
				// cout << i << " is not prime" << endl;
				break;
				}
				if (j == 7)
				cout << i << " is prime\n";
				// break;
				
			}
	
		// if (isPrime == true)
		// cout << i << " is prime" << endl;
	}

	// TODO: iterate through each number in the range [begin..end]
	// TODO: check if n is prime by testing divisibility from 2 up to n-1
	// TODO: if n is divisible by i, it is not prime
	// TODO: if n is prime, print it

	cout << endl;

	return 0;
}
