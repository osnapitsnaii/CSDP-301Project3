// Najla Evans		CSDP301		Project 3		11/1/22

#include<iostream>
#include<stdlib.h>
using namespace std;

extern "C" int Addersum(int a, int b, int c);
extern "C" int Addercpp(int a, int b, int c);

int Addersum(int a, int b, int c)
{
	return 0;
}

int Addercpp(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	int a = 10, b = 15, c = 20;

	int Sum1 = 0;
	int Sum2 = 0;

	Sum1 = Addersum(a, b, c);
	Sum2 = Addercpp(a, b, c);

	cout << "Computing the sum...\n";
	cout << "The first sum is: " << Sum1 << endl;
	cout << "Computing the second sum...\n";
	cout << "The second sum is: " << Sum2 << endl;

}