Find the first or last occurrence of a given number in a sorted array:-
 The binary search terminates as soon as any occurrence of the given target element is found. To find the given element’s first occurrence, modify the binary search to continue searching even on finding the target element. Instead, update the result to mid and search towards the left (towards lower indices), 
 i.e., modify our search space by adjusting high to mid-1 on finding the target at mid-index.
