#include<iostream>
//#include <conio.h>

using namespace std;
int find();
int main()
{
	int t;
	cout<<"\n Enter the no. of test cases:";
	cin>>t;
	int k[t];
	for(int i=0;i<t;i++)
	{
		k[t]=-1;
		k[t] = find();
	}
	for(int i=0;i<t;i++)
	{
		cout<<k[t];
	}
	return 0;	
}

int find()
{
	int n,k,f;
	cin>>n>>k;
	int arr[n];
	for(int j=0; j<n; j++)
	{
		cin>>arr[j];
		if(k == arr[j])
		{	
			f=1;
			return f;
		}	
	}
	return -1;
}



