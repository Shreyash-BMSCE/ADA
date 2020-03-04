#include<iostream>

using namespace std;

void insertion_sort(int *arr,int n)
{
	int key,j;
	for(int i=1; i<n; i++)
	{
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

void disp(int *arr,int n)
{
	printf("\n The Sorted Array is:");
	for(int i=0; i<n; i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\n";
}

int main()
{
	int n;
	cout<<"\nEnter length :";
	cin>>n;
	int arr[n];
	cout<<"\n Enter the array: ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	insertion_sort(&arr[0],n);
	disp(&arr[0],n);
	return 0;
}
