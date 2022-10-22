//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>


// } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int start =0 , end = n-1 , i =0 ;
    while(i<=end){
        if(a[i]== 0){
           int temp = a[start];
           a[start] = a[i];
           a[i] = temp ;
           start++, i++;
        }
        else if(a[i]==2){
               int temp = a[end];
           a[end] = a[i];
           a[i] = temp ;
           end--;
        }
        else{
            i++;
        }
    }
    
}

//{ Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}

// } Driver Code Ends