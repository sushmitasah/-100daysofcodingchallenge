Problem:-

//Amicable numbers are two different numbers so related that the sum of the proper divisors of each is equal to the other number. (A proper divisor of a number is a positive factor of that number other than the number itself.
//
//INPUT: The first line consists of an integer T i.e. the number of test cases. First and the last line of each test case consists of two integers x and y.
//
//OUTPUT: Print '1' if the following pair is amicable pair otherwise print '0'.
//
//CONSTRAINTS:
//
//1<=T<=100
//1<=x,y<=105
//
//EXAMPLES:
//INPUT :
//2
//220 284
//1 2
//
//OUTPUT : 
//1
//0
//
//Explanation :
//
//Test Case 1 : Proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110. Sum of these is 284. Proper divisors of 284 are 1, 2, 4, 71 and 142 with sum 220.
//

Solution:-

using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n1,n2,i,sum=0;
	    cin>>n1>>n2;
	    for(i=1;i<n1;i++)
	    {
	        if(n1%i==0)
	        sum=sum+i;
	    }
	    int sum1=0;
	    for(i=1;i<n2;i++)
	    {
	        if(n2%i==0)
	        sum1=sum1+i;
	    }
	    if(sum1==n1 && sum==n2)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
