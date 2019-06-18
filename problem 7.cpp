Problem:-

/*Given an array of N elements, find the minimum number of insertions to convert the given array into a co-prime array pair-wise.

Input:
The first line of the input contains an integer T, denoting number of test cases. The first line of each test case contains an integer N denoting the size of the array. The second line of each test cases N space separated integers.

Output:
For each test case, print  a single line of output containing minimum no. of insertions.

Constraints:
1<=T<=100
1<=N<=100
1<=arr<=1000

Example:
Input:
2
3
2 7 28
3
5 10 20
Output:
1
2

Explanation:
Testcase 1: 
Here, 1st pair = {2, 7} are co-primes( gcd(2, 7) = 1).
2nd pair = {7, 28} are not co-primes, insert 9
between them. gcd(7, 9) = 1 and gcd(9, 28) = 1.

Testcase 2:
Here, there is no pair which are co-primes.
Insert 7 between (5, 10) and 1 between (10, 20).



*/
Solution:-


using namespace std;

int gcd(int, int);

int main() {
	//code
	int t;
	cin >> t;
	int i;
	for(i=0; i<t; i++)
	{
	    int n;
	    cin >> n;
	    int cnt=0, j, ar[n], k, a, b, g;
	    for(j=0; j<n; j++) cin >> ar[j];
	    for(j=0; j<n-1; j++)
	    {
	        k=j+1;
	        //cout << "k = " << k << endl;
	        if(ar[j]>ar[k])
	        {
	            a=ar[j]; b=ar[k];
	        }
	        else
	        {
	            a=ar[k]; b=ar[j];
	        }
	        //cout << "a = " << a << ", b = " << b << endl;
	        g=gcd(a, b);
	        //cout << "gcd = " << g << endl;
	        if(g!=1) 
	        {
	            cnt++;
	            //cout << "cnt = " << cnt << endl;
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}

int gcd(int a, int b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
}
