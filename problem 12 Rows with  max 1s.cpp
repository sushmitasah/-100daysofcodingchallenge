
Problem:-


Given a boolean 2D array where each row is sorted. Find the row with the maximum number of 1s.

Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case contains n and m, where n is the number of rows and m is the number of columns. The second line of each test case contains the array elements.

Output:
Print the row with the maximum number of 1s.

Constraints:
1 = T = 50
1 = n,m = 103

Example:
Input:
2
4 4
0 1 1 1 0 0 1 1 1 1 1 1 0 0 0 0
2 2
0 0 1 1

Output:
2
1

Explanation :
Testcase 1 : Row 2 is having maximum number of 1s (0-based indexing).

Solution:-

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	int t,count=0;
	cin>>t;
	while(t--)
	{
	    int n,i,j,x,min=-1,m;
	    cin>>n>>m;
	    int a[n][m];
	    for(i=0;i<n;i++)
	    {
	    	for(j=0;j<m;j++)
	    	{
	        cin>>a[i][j];
	    }}
	    
	    for(i=0;i<n;i++)
	    {   count=0;
	    	for(j=0;j<m;j++)
	    	{
	        if(a[i][j]==1)
	        {
	        	count++;
			}
	        }
	        if(min<count)
	        {
	        	min=count;
	        	x=i;
	        	
	        	
	        	
			}
	    }
	    cout<<x<<"\n";
	}
	return 0;
}
