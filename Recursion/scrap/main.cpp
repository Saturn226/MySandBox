#include <iostream>
using namespace std;



int summation(int number);

int main()
{

	int num = 10;
	int sum = summation(num);
	cout << sum;
	cin.ignore();
	return 0;
}

//iterative summation

	int summation (int number)
	{
		int sum = 0;	
		for(int i = 0; i <= number; i++)
			sum += i;
		return sum;
	} 

//recursive summation
//int summation(int number)
//{
//	if (number <= 0)
//		return 0;
//	else 
//		return (number + summation(number - 1));
//}