
#include<iostream>
#include<math.h>
using namespace std;


int main() {
	 long int n, no;int p,remainder,d;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> no;
		 p = 0; remainder=0; d = 0;
	while (no != 0)
	{
		remainder = no % 10;
		d += pow(2, p) * remainder;
		no = no / 10;
		++p;
	}
	cout<<d<<"\n";	
	}
	return 0;
}