#include<iostream> 
#include<string.h>

using namespace std; 
  
int max (int x, int y) {
     if (x > y)
     return x;
     else return y; } 
  

int longpalin(char *arr, int i, int j) 
{ 
if (i == j) 
    return 1; 
if (arr[i] == arr[j] && i + 1 == j) 
    return 2; 
if (arr[i] == arr[j]) 
    return longpalin (arr, i+1, j-1) + 2; 
return max( longpalin(arr, i, j-1), longpalin(arr, i+1, j) ); 
} 

int main() 
{ 
    char arr[20];
    cout<<"\n Enter the word : ";
    gets(arr); 
    int n = strlen(arr); 
    cout << "The length of the longest palindrome is " << longpalin(arr, 0, n-1); 
    return 0; 
} 
