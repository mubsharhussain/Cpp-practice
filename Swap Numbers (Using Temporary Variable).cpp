//Swap Numbers(Using Temporary Variable)
#include<iostream>
using namespace std;
int main()
{
	int first_number = 0, second_number = 0,temp=0;
	cout << "enter first numer = ";
	cin >> first_number;
	cout << "enter second numer = ";
	cin >> second_number;
	cout << "number befor swap are " << first_number << " and " << second_number << endl;
	temp = first_number;
	first_number = second_number;
	second_number = temp;
	cout << "number after swap are " << first_number << " and " << second_number << endl;

	return 0;
	
}