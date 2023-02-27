- what happens if we instead of incrementing pointers by one in subarray[i..n], we instead binary search?

- if `A[i] = -20, A[j] = -5`, then we need to find A[k] = 25. If we don't find it, we let the right pointer point to the first value left of where 25 would be, and the repeat the process for left pointer.

- time complexity?

-20,-5, -2,-1,22,26,27,30,55,80

-20-5+80 = 55
r pointer binary search for 25 -> 22
-20-5+22 = -3
l pointer binary search for -2 -> -2
