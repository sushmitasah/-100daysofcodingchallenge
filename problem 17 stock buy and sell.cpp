Problem:-

//The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.
//
//Input: 
//First line contains number of test cases T. First line of each test case contains an integer value N denoting the number of days, followed by an array of stock prices of N days. 
//
//Output:
//For each testcase, output all the days with profit in a single line. And if there is no profit then print "No Profit".
//
//Constraints:
//1 <= T <= 100
//2 <= N <= 103
//0 <= Ai <= 104
//
//Example
//Input:
//2
//7
//100 180 260 310 40 535 695
//10
//23 13 25 29 33 19 34 45 65 67
//
//Output:
//(0 3) (4 6)
//(1 4) (5 9)
//
//Explanation:
//Testcase 1: We can buy stock on day 0, and sell it on 3rd day, which will give us maximum profit.
//
//Note: Output format is as follows - (buy_day sell_day) (buy_day sell_day)
//For each input, output should be in a single line.

Solution:-

using namespace std;

void find(int price[], int n)
{
    int count = 0; // count of solution pairs 

  
    // Traverse through given price array 
    int i = 0; 
    while (i < n - 1) { 
        // Find Local Minima. Note that the limit is (n-2) as we are 
        // comparing present element to the next element. 
        while ((i < n - 1) && (price[i + 1] <= price[i])) 
            i++; 
  
        // If we reached the end, break 
        // as no further solution possible 
        if (i == n - 1) 
            break; 
  
        // Store the index of minima 
        int buy = i++; 
  
        // Find Local Maxima. Note that the limit is (n-1) as we are 
        // comparing to previous element 
        while ((i < n-1) && (price[i] < price[i+1])) 
            i++; 
  
        // Store the index of maxima 
        int sell = i++ ; 
        cout<<"("<<buy<<" "<<sell<<")"<<" ";
        // Increment count of buy/sell pairs 
        count++; 
    }
    if(count==0)
    cout<<"No Profit";
    cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++)
	    cin>>a[i];
	    find(a, n);
	   
	    //cout<<endl;
	}
	return 0;
}
