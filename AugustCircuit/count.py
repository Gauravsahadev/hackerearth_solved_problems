def kmax(arr, k, n,lst):

    # In each iteration it will give
    # the ith maximum subarray sum.
    for c in range(k):
 
        # Kadane's algorithm
        max_so_far = -float("inf")
        max_here = 0
 
        # compute starting and ending
        # index of each of the subarray
        start = 0
        end = 0
        s = 0
        for i in range(n):
             
            max_here += arr[i]
            if (max_so_far < max_here):
                 
                max_so_far = max_here
                start = s
                end = i
            if (max_here < 0):
                 
                max_here = 0
                s = i + 1
 
        # Print out the result
        
        lst.extend([start,end+1,start+end])
 
        # Replace all elements of the maximum subarray
        # by -infinity. Hence these places cannot form 
        # maximum sum subarray again.
        for l in range(start, end+1):
            arr[l] = -float("inf")
    lst=list(set(lst))
    lst.sort()
    lst.remove(0)
    print(lst)
    
# Driver Program
# Test case 1
arr1 = [4, 1, 1, -1, -3, -5, 6, 2, -6, -2]
k1 = 3
n1 = len(arr1)
lst=[]
# Function calling
kmax(arr1, k1, n1,lst)
 
# Test case 2
arr2 = [1,2,3]
k2 = 1
n2 = len(arr2)
lst2=[]
# Function calling
kmax(arr2, k2, n2,lst2)