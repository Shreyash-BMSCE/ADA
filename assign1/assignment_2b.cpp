#include<iostream>

using namespace std;

int main()
{
	int n,arr[20],key,lwr=0,upr=0,i,flag;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Array:";
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter key:";
	cin>>key;
	int mid,beg = 0,end = n-1;
	while(beg <= end)
	{
		mid = (beg + end)/2;
		i = mid;
		if(arr[mid]==key)
		{
			if(mid == 0)
			{		
				flag = 0;
				break;
			}
			if(mid == n-1)
			{
				flag = 0;
				break;
			}
			//lwr = mid;
			if(arr[mid-1] == key)
			{
				mid--;
				while(arr[mid] == key)
					mid--;
				
					lwr = mid + 1;
			}
			else
			{
				lwr = mid;
			}
			
			mid = i;
			//upr = mid;
			if(arr[mid+1] == key)
			{
				mid++;
				while(arr[mid] == key)
					mid++;
				
					upr = mid-1;
			}
			else
			{
				upr = mid;
			}
			
			flag = 0;
			break;
		}
		else if(arr[mid] > key)
			end = mid - 1;
		else if(arr[mid] < key)
			beg = mid + 1; 
	}
	if(flag == 0 )
		cout<<"\n The Frequency is: "<<(upr-lwr+1);
	else
	{
		cout<<"\n No element found";
	}
	return 0;
}

  
