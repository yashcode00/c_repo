#include<iostream>
using namespace std;
int main() {
	int n;cin>>n;int remainder[100];int i=0;
	while(n!=0)
	{
		remainder[i]=n%8;
		n=n/8;
		++i;
	}i-=1;
	for(int j=i;j>=0;--j)
	{
		cout<<remainder[j];
	}

	return 0;
}