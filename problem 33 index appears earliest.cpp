Problem:-

/*Given an array of N integers that might contain duplicates, find the element whose last appearance is earliest.

Input:
First line of input contains a single integer T denoting the number of test cases. First line of every test case has one number N denoting the length of the array and second line of every test case has N integers.

Output:
For each test case, print the required output.

Constraints:
1<=T<=100
1<=N<=10^3
1<=A[i]<=10^6

Example:
Input:
1
5
10 30 20 10 20
Output:
30

Explanation:
Below are indexes of last
appearances of all elements (0 based indexes)
10 last occurs at index 3
30 last occurs at index 1
20 last occurs at index 2
The element whose last appearance earliest
is 30.
*/




Solution:-



using namespace std;

int main()
{
	int t,i,j,flag=0;
	int n;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			flag=0;
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				cout<<a[i]<<endl;
				break;
			}
		}
		t--;
	}
}
