#include<iostream>

using namespace std;

int gcd(int m,int n)
{
	if (m == 0)
	return n;
	
	if(n == 0)
	return m;
	
	if(m == n) 
	return m;
	
	if(m > n)
	return gcd(m-n,n);
	
	return gcd(m,n-m);
}

int main()
{
	int m,n;
	cout<<"Finding the GCD...Enter the numbers :";
	cin>>m>>n;
	cout<<"\n The GCD is:"<<gcd(m,n)<<endl;
	return 0;
}

