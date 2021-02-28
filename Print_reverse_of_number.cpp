#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long long int no;  long long  int d = 0;int  remainder;
	cin >> no; int p=0; int n1 = no;
	while (n1!=0)
	{++p;
		n1 = n1 / 10;
		
	}
	
	p -= 1;
	while (p >= 0)
	{
		remainder = no % 10;
		d += remainder * pow(10, p);
		no = no / 10;
		--p;
	}
	cout << d+1;

	return 0;
}