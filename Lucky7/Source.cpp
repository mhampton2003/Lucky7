//Maya Hampton
//Lucky 7

#include <iostream>
#include <cstring>

using namespace std;

void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();

int main() {

	//f1();
	//f2();
	//f3();
	//f4();
	f5();

	return 0;
}

//reads in 5 integers
//prints the largest and the smallest of the group
void f1()
{
	int curr, large, small;

	cout << "Enter 5 integers: ";
	cin >> curr;

	//first entry is both small and large
	small = large = curr;

	for (int i = 1; i <= 4; i++) {
		cin >> curr;

		if (curr < small)
			small = curr;
		else if (curr > large)
			large = curr;
	}

	cout << "largest = " << large << " smallest = " << small << endl;
}

//calculates and prints the sum of the first 50 
//positive integers that are multiples of 7. 
void f2()
{
	int sum = 0;
	for (int i = 1; i <= 50; i++)
		sum += i * 7;
	cout << "sum = " << sum << endl;
}

//calculates and prints the first 10 terms of the factorial. 
void f3()
{
	int fact = 1;

	for (int i = 2; i <= 11; i++) {
		cout << fact << " ";
		fact = fact * i;
	}

	cout << endl;
		
}

//reads in a string and determines whether it is a palindrome.
void f4()
{
	string test = "tacocat";
	int lastIndex = test.length() - 1;
	int firstIndex = 0;

	bool ok = true;
	while (ok && firstIndex < test.length()) {
		if (test[firstIndex++] != test[lastIndex--])
			ok = false;
	}

	if (ok)
		cout << test << " is a palindrome\n";
	else
		cout << test << " is not a palindrome\n";
}

void f5()
{
}

void f6()
{
}

void f7()
{
}
