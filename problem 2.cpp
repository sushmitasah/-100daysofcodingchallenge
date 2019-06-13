Problem:-
//Given three increasingly sorted arrays A, B, C of sizes N1, N2, and N3 respectively, you need to print all common elements in these arrays.
//
//Note: Please avoid printing the same common element more than once.
//
//Input:
//First line contains a single integer T denoting the total number of test cases. T testcases follow. Each testcase contains four lines of input. First line consists of 3 integers N1, N2 and N3, denoting the sizes of arrays A, B, C respectively. The second line contains N1 elements of A array. The third lines contains N2 elements of B array. The fourth lines contains N3 elements of C array.
//
//Output:
//For each testcase, print the common elements of array. If not possible then print -1.
//
//Constraints:
//1 <= T <= 100
//1 <= N1, N2, N3 <= 107
//1 <= Ai, Bi, Ci <= 1018
//
//Example:
//Input:
//1
//6 5 8
//1 5 10 20 40 80
//6 7 20 80 100
//3 4 15 20 30 70 80 120
//Output:
//20 80
//
//Explanation:
//Testcase1:  20 and 80 are the only common elements

Solution:-

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,o;
	    cin>>n>>m>>o;
	    int a[n],b[m],c[o],i,j,d[1000],k=0,cnt=0,flag=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    for(i=0;i<o;i++)
	    {
	        cin>>c[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	           if(a[i]==b[j])
			   {
			   	d[k]=a[i];
			   	k++;
			   	cnt++;
						   }        	
			}
	    }
	    
	     for(i=0;i<o;i++)
	    {
	    	for(k=0;k<cnt;k++)
	    	{
	    		 if(c[i]==d[k])
			   {
			   	flag=1;
			   	cout<<c[i]<<" ";
			   	
			  }      
			}
	        
	    }
	    if(flag==0)
	    {
	    	cout<<"-1";
		}
	    cout<<"\n";
	}
	return 0;
}
