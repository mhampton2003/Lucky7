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

	f1();

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

void f2()
{
}

void f3()
{
}

void f4()
{
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
