/*The function binarySearch(int* arr, int n, int x) performs the binary search algorithm to look for an element target in the input array arr of length len . 
If the element if found, the function returns the index of target in arr if it is not found the function returns -1.*/


//Header snipet

#include <stdio.h> int binarySearch(int arr[], int l, int r, int x)

{
while (l <= r) { int m = l + (r - l) / 2; if (arr[m] == x) return m;

if (arr[m] < x) l = m + 1; else r = m - 1;

}

return -1;

//Footer snipet

} int main(void) { int n; scanf("%d",&n); int arr[n]; for(int i=0;i<n;i++){ scanf("%d",&arr[i]); }

int x;

scanf("%d",&x); int result = binarySearch(arr, 0, n - 1, x);

(result == -1) ? printf("Element is not present"

" in array")

: printf("Element is present at "

"index %d", result);

return 0;

}
