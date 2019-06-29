Problem:-
//You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
//Note: Expected solution in O(n) time using constant extra space.
//
//Input:
//First line consists of T test cases. First line of every test case consists of N, denoting the number of elements in array. Second line of every test case consists of elements in array.
//
//Output:
//Single line output, print the smallest positive number missing.
//
//User Task:
//The task is to complete the function missingNumber() which returns the smallest positive missing number in the array.
//
//Constraints:
//1 <= T <= 100
//1 <= N <= 106
//-106 <= arr[i] <= 106
//
//Example:
//Input:
//2
//5
//1 2 3 4 5
//5
//0 -10 1 3 -20
//Output:
//6
//2
//
//Explanation:
//Testcase 1: Smallest positive missing number is 6.
//Testcase 2: Smallest positive missing number is 2.
//

Solution:-


{
#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int missingNumber(int arr[], int n);
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
}
/*This is a function problem.You only need to complete the function given below*/
// Functio to find first smallest positive
// missing number in the array
int missingNumber(int arr[], int n) { 
   
    
   int i,x,b[1000]={0};
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
            b[(arr[i]%1000)]=-1;
    }
    for(i=1;i<1000;i++)
    {
        if(b[i]>=0)
            {x=i;
            break;}
    }
    return i;
} 
    




