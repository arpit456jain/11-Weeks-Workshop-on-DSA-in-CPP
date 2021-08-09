/*
Given an array arr[] of size N and two elements x and y, use counter variables to find which element appears most in the array, x or y. If both elements have the same frequency, then return the smaller element.
Note:  We need to return the element, not its count.
Input:
N = 11
arr[] = {1,1,2,2,3,3,4,4,4,4,5}
x = 4, y = 5
Output: 4
Explanation: 
frequency of 4 is 4.
frequency of 5 is 1.
*/
#include <stdio.h>

int majorityWins(int arr[], int n, int x, int y) {
 
    // code here
    int c1=0;
    int c2=0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i]==x)
        c1++;
        if(arr[i]==y)
        c2++;
    }
    if(c1>c2)
    return x;
    else if(c1<c2)
    return y;
    else 
    {
        if(x<y)
        return x;
        else 
        return y;
    }
}

// { Driver Code Starts.
int main() {

    int t; // Testcases
    scanf("%d", &t); // Input the testcases
    while (t--) // Until all testcases are exhausted
    {
        int n; // Size of array
        scanf("%d", &n); // Input the size
        int arr[n]; // Declaring array of size n
        for (int i = 0; i < n; i++) // Running a loop to input all elements of arr
            scanf("%d", &arr[i]);

        int x, y; // declare x and y
        scanf("%d%d", &x, &y); // input x and y
        printf("%d\n", majorityWins(arr, n, x, y)); // calling the function that you complete
    }

    return 0;
}  // } Driver Code Ends