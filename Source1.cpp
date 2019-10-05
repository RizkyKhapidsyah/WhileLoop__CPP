#include <iostream>

using namespace std;

int ContohLooping1();
int ContohLooping2();
int ContohLooping3();
int ContohLooping4();
int ContohLooping5(); // +For


int A, i;

int main()
{
	ContohLooping1(); cout << endl;
	ContohLooping2(); cout << endl;
	ContohLooping3(); cout << endl;
	ContohLooping4(); cout << endl;
	ContohLooping5(); cout << endl;

	cin.get();
	return 0;
}

int ContohLooping1()
{
	A = 5;
	while (A < 10)
	{
		cout << "Dicetak" << endl;
		A = 11;
	}

	cout << "Selesai" << endl;
	return 0;
}

int ContohLooping2()
{
	A = 5;
	while (A < 10)
	{
		cout << "Dicetak" << endl;
		A += 5;
	}

	cout << "Selesai" << endl;
	return 0;
}

int ContohLooping3()
{
	A = 5;
	while (A < 10)
	{
		cout << "Dicetak" << endl;
		A += 2;
	}

	cout << "Selesai" << endl;
	return 0;
}

int ContohLooping4()
{
	A = 1;
	while (A <= 10)
	{
		cout << "Dicetak" << A << endl;
		A += 1;
	}

	cout << "Selesai" << endl;
	return 0;
}

int ContohLooping5()
{
	A = 10;
	while (A <= 10)
	{
		for (i = 1; i <= A; i++)
		{
			cout << "Dicetak " << i << endl;
		}
		cout << endl;
		A = 11;
	}

	cout << "Selesai" << endl;
	return 0;
}