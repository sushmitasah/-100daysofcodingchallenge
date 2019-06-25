

Problem:-
//Given an integer array A of N elements. You need to find the sum of two elements such that sum is closest to zero.
//
//Input:
//The first line of input contains an integer T denoting the number of test cases.  
//The first line of each test case is N, denoting the size of array. Each test case consist of a N integers which are the array elements.
//
//Output:
//Print the requiired sum which is closest to zero.
//
//Constraints:
//1 = T = 100
//1 = N = 103
//-106 = a[i] = 106
//
//Example:
//Input:
//3
//3
//-8 -66 -60  
//6
//-21 -67 -37 -18 4 -65  
//2
//-24 -73
//
//Output:
//-68
//-14
//-97
//
//Explanation:
//Testcase 1: Sum of two elements closest to zero is -68 using numbers -60 and -8.




Solution:-

using namespace std;

int closest(int arr[],int n)
{
    int i=0,j=n-1,sum=-INT_MAX;
    int k;
    while(i < j)
    {
        k = arr[i] + arr[j];
        if(abs(sum) > abs(k))
            sum = k;
        if(k < 0)
            i++;
        else
            j--;
    }
    return sum;
}

int main() {
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n],i;
        for(i=0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        
        cout << closest(arr,n) << "\n";
    }
	return 0;
}
