
Problem:-
/*Given an array of size n and a number k, we need to print first k natural numbers that are not there in given array.

Input:
First line consists of T test case. First line of every test case consists of N and K. Second line consists of elements of array.

Output:
Single line output, print the K missing numbers.

Constraints:
1<=T<=100
1<=N<=10^4
-1000<=Ai<=1000

Example:
Input:
2
3 3
1 4 3
3 3
-5 -6 1
Output:
2 5 6 
2 3 4 */

Solution:-


#include<iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    int arr[n];
	    int mp[2002]={};
	    for(int i=0;i<n;i++)
	    {   cin >> arr[i];
	        if(arr[i]>0)
	          mp[arr[i]]++;
	    }
	    int count=0;
	    int i=1;
	    while(count!=k)
	    {
	        if(mp[i]==0)
	           {
	               cout << i <<" ";
	               count++;
	           }
	           i++;
	    }
	    cout << endl;
	    
	  
	}
	return 0;
}
