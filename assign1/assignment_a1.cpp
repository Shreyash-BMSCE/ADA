#include<iostream>

using namespace std;


void TOH(int n,char src,char dest, char temp)
{
	if (n == 1)
	{
		cout<<"Move disk 1 from rod "<<src<<" to rod "<<dest<<endl;
		return;
	}
	TOH(n-1,src,temp,dest);
	cout<<"Move disk "<<n<<" from "<<src<<" to rod "<<dest<<endl;
	TOH(n-1,temp,dest,src);
}	


int main()
{
	int n;
	cout<<"\n Enter the number of Disks: ";
	cin>>n;
	TOH(n,'A','C','B');
	return 0;	
}
