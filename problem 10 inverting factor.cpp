
Problem:-
Ishaan being curious as always, was playing with numbers when he started to reversing the numbers. He invented something called the "inverting factor" of two numbers.
Inverting Factor of 2 integers is defined as the absolute difference between the reverse of the 2 integers.
Ishaan has an array A of N integers. He wants to find out the smallest possible Inverting Factor among all pairs of his integers. Help him find that.
Note : Trailing zeros in a number of ignored while reversing, i.e. 1200 becomes 21 when reversed.

Input : 
First line of input contains a single integer T denoting the number of test cases.
The first line of each test case contains an integer N.
The second line contains N space-separated integers denoting the array A.

Output : 
For each test case, print the required answer in a new line.

Constraints : 
1 <= T <= 100
2 <= N <= 1000
1 <= A[i] <= 10^5

Example : 
Input : 
3
5
56 20 47 93 45
6
48 23 100 71 56 89
4
26 15 45 150
Output : 
9
14
0

Explanation : 
Case 1 : 
The minimum inverting factor is 9, of the pair (56,47)

Case 2 : 
The minimum inverting factor is 14, of the pair (48,89)

Case 3 : 
The minimum inverting factor is 0, of the pair (15,150)
 




Solution:-

#include <cmath>
#include <climits>
using namespace std;

int reverse(int num)
{
    int ans =0,rem=0;
    while(num !=0) {
    rem = num%10;
    ans = (ans*10)+rem;
    num = num/10;
    }
    return ans;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int min=INT_MAX;
	    int n;
	    cin>>n;
	    int *a = new int[n];
	    for (int i=0;i<n;i++)
	    cin>>a[i];
	    for (int i=0;i<=n-1;i++)
	    {
	        a[i] = reverse(a[i]);
	    }
	    for (int i=0;i<=n-2;i++)
	    {
	        for (int j=i+1;j<=n-1;j++)
	        {
	           int diff = abs(a[i]-a[j]);
	           if (diff < min)
	           min = diff;
	        }
	    }
