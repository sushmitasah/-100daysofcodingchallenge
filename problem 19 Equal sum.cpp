
Problem:-

//Given an array A of length N. Determine if there exists an element in the array such that the sum of the elements on its left is equal to the sum of
//the elements on its right. If there are no elements to the left/right, then the sum is considered to be zero. 
//Formally, find an i, such that, A1+A2...Ai-1 =Ai+1+Ai+2...AN.
// 
//
//Input:
//
// The first line contains T, the number of test cases. For each test case, the first line contains N, the number of elements in the array A. The
//second line for each test case contains N space-separated integers, denoting the array A.
//
//
//Output:
//
//For each test case print YES if there exists an element in the array, such that the sum of the elements on its left is equal to the sum of the
//elements on its right; otherwise print NO in a separate line.
//
//
//Constraints:
//
//1= T = 30 
//1= N =100000 
//1= Ai = 2×10000 
//1= i =N
//
//
//Example:
//
//Input
//1
//4
//1 2 3 3
//Output:
//YES





Solution:-


#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int last=0,r=n-1,sum1=0,sum2=0;
	    sum1=a[last];
	    sum2=a[r];
	    while(last<r)
	    {
	        if(sum1>sum2)
	        sum2+=a[--r];
	        if(sum1<sum2)
	        sum1+=a[++last];
	        if(sum1==sum2)
	        sum1+=a[++last],sum2+=a[--r];
	    }
	    if(sum1==sum2)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
