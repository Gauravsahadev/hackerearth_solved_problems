#include <bits/stdc++.h>
using namespace std;
 
// function to calculate the max of all the
// minimum segments
int maxOfSegmentMins(int a[], int n, int k)
{
    // if we have to divide it into 1 segment
    // then the min will be the answer
    if (k == 1) 
       return *min_element(a, a+n);
 
    if (k == 2) 
       return max(a[0], a[n-1]);  
    
    // If k >= 3, return maximum of all
    // elements.
    return *max_element(a, a+n);
}
 
// driver program to test the above function
int main()
{
    int a[] = { 1,2,3, 4,6};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 2;
    cout << maxOfSegmentMins(a, n, k);
}
