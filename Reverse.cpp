#include<iostream>
using namespace std;

int main()
{
	//Program to reverse a 5 digit number and sum all of its digit
	
	int num, sum = 0, reverse = 0;
	
	cout<< "Enter a 5 digit number:\t\t ";
	cin>> num;
	
		//Calculating Reverse and Sum
		
		//Last digit 
	reverse = (reverse * 10) + (num % 10);
	sum = sum + (num % 10);
	num = num / 10;
		
		//forth digit
	reverse = (reverse * 10) + (num % 10);
	sum = sum + (num % 10);
	num = num / 10;
	
		//third digit
	reverse = (reverse * 10) + (num % 10);
	sum = sum + (num % 10);
	num = num / 10;
	
		//second digit
	reverse = (reverse * 10) + (num % 10);
	sum = sum + (num % 10);
	num = num / 10;
	
		//first digit
	reverse = (reverse * 10) + (num % 10);
	sum = sum + (num % 10);
	num = num / 10;
	
	cout<< "\nReverse of the number is:\t "<<reverse;
	cout<< "\nSum of all digits of number is:\t "<<sum;
	
	return 0;
}
