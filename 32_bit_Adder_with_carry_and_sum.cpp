#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a, b; int c1;
    cout<<"Enter First number: ";
	cin >> a ;
    cout<<"\nEnter Second Number: ";
    cin>> b;
	int arr[1000], brr[1000], sum[1000], c = 0, p = 0, q = 0;
	while (a != 0)
	{
		arr[p] = a % 2; ++p;
		a = a / 2;

	}for (int l = p; l < 32; ++l) {
		arr[p] = 0;
	}
	while (b != 0)
	{
		brr[q] = b % 2; ++q;
		b = b / 2;

	}for (int k = q; k < 31; ++k) { brr[k] = 0; }
	for (int i = 0; i <= 31; ++i)
	{
		if (arr[i] == 0 && brr[i] == 0 && c == 0) { sum[i] = 0; c = 0; }
		else if (arr[i] == 1 && brr[i] == 1 && c == 1) { sum[i] = 1; c = 1; }
		else if (arr[i] == 1 && brr[i] == 0 && c == 0) { sum[i] = 1; c = 0; }
		else if (arr[i] == 0 && brr[i] == 1 && c == 0) { sum[i] = 1; c = 0; }
		else if (arr[i] == 0 && brr[i] == 0 && c == 1) { sum[i] = 1; c = 0; }
		else { sum[i] = 0; c = 1; }
	}
	int z = 0; int s = 0;
	while (z <= 31)
	{
		s += sum[z] * pow(2, z);
		++z;
	}
	cout << s;

	return 0;
}