
Problem:-

//Atul is frustrated with large digits factorials so he decided to convert the factorials in power of 10  ( 120 ->   1* 10^2 ). He is not good in programming so he is asking for your help to know the first digit of factorial and power of 10.  
//
//For ex.  5 (120 ->   1* 10^2)   first digit = 1
//
//                                               power     = 2
//
// 
//
//Input
//
//The first line of the input contains a single integer T denoting the number of test cases.
//The first line of each test case contains N .
//Output
//
//For each test case, output the two integers separated by space.
//
//Constraints
//
//    •    1 = T = 101
//
//    •    1 = N= 1001
//
//Example
//
//Input:
//
//3
//
//2
//
//5
//
//9
//
//Output:
//
//2 0
//
//1 2
//
//3 5
//


Solution:-
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n, i, power = 0;
	    cin >> n;
	    double fact = 1;
	    for(i = 1; i <= n ; i++)
	    {
	        fact = fact * i;
	        while(int(fact)>9)
	        {
	            power++;
	            fact = fact / 10;
	        }
	    }
	   
	   cout<<(int)fact<<" "<< power<< endl;
	}
	return 0;
}

