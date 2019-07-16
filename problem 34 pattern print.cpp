Problem:-
/*q:-Given an array of integers, task is to print the array in the order – smallest number, Largest number, 2nd smallest number, 2nd largest number, 3rd smallest number, 3rd largest number and so on..

Input:
The first line consists of an integer T i.e number of test cases. The first line of each test case consists of an integer N.The next line consists of N spaced integers. 

Output:
Print the required answer.

Constraints: 
1<=T<=100
1<=N,a[i]<=1000

Example:
Input:
2
9
1 9 2 8 3 7 4 6 5
4
1 2 3 4 

Output:
1 9 2 8 3 7 4 6 5
1 4 2 3*/


Solution:-





using namespace std;

int main() {
    int t,i,j;
    cin >> t;
    while(t--){
        int n,arr[100000];
        cin >> n;
        for(i=0;i<n;i++)
            cin >> arr[i];
            
        sort(arr,arr+n);
        int ans[100000],k=0;
        for(i=0,j=n-1;((i<=n/2) || (j>n/2));i++,j--)
        {
            ans[k]=arr[i];
            k++;
            ans[k]=arr[j];
            k++;
        }
        
        for(i=0;i<n;i++)
        {
            printf("%d ",ans[i]);
        }
        printf("\n");
    }
	return 0;
}
