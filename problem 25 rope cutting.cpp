Problem:-

//You are given N ropes. A cut operation is performed on ropes such that all of them are reduced by the length of the smallest rope. Display the number of ropes left after every cut operation till the length of each rope is zero.
//
//Input: The first line of input contains integer T denoting the number of test cases. For each test case, there is a line containing the integer N(no of ropes) followed by the N space separated elements(length of rope).
//
//
//Output: For each test case, print the number of ropes that are left after each operation with space. IF no ropes left after one operation, in this case, we print 0. 
// 
//
//Constraints:
//
//1<=T<=100
//
//1<=N<=100
//Example:
//
//Input: 
//2
//6
//5 1 1 2 3 5
//10
//5 1 6 9 8 11 2 2 6 5
//Output: 
//4 3 2
//9 7 5 3 2 1

Solution:-

#include<iostream>
#include<algorithm>
using namespace std;
void cut(int r[], int n) 
{ 
    sort(r,r + n); 
    int x = 0; 
    int cutLength =r[0]; 
    for (int i = 1; i < n; i++) 
    { 
        if (r[i] - cutLength > 0) 
        { 
            cout << (n - i) << " "; 
            cutLength =r[i]; 
            x++; 
        } 
    } 
    if (x == 0) 
        cout << "0 "; 
} 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        int i;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        cut(A,n);
        cout<<endl;
    }
    

	return 0;
}


