# Sorting Algorithms Implementation

Algorithm | Link
------------ | -------------
Bubble Sort | [link!](https://github.com/dhrubajyoti89/Algorithms/blob/dhrubajyoti89-patch-1/Sorting/bubble-sort.cpp)
Selection Sort | [link!](https://github.com/dhrubajyoti89/Algorithms/blob/dhrubajyoti89-patch-1/Sorting/select-sort.cpp)
Insertion Sort | [link!](https://github.com/dhrubajyoti89/Algorithms/blob/dhrubajyoti89-patch-1/Sorting/insertion.cpp)
Merge Sort | [link!](https://github.com/dhrubajyoti89/Algorithms/blob/dhrubajyoti89-patch-1/Sorting/merge-sort.cpp)
Quick Sort | [link!](https://github.com/dhrubajyoti89/Algorithms/blob/dhrubajyoti89-patch-1/Sorting/quick-sort.cpp)

## 1. Bubble Sort

Bubble sort is a sorting technique in which each pair of adjacent elements are compared, if they are in wrong order we swap them. This algorithm is named as bubble sort because, same as like bubbles the smaller or lighter elements comes up (at start) and bigger or heavier elements goes down (at end).

## Algorithm for Bubble Sort:

```
begin BubbleSort(list)
   for all elements of list
      if list[i] > list[i+1]
         swap(list[i], list[i+1])
      end if
   end for
   return list
end BubbleSort
```

## Advantages of bubble sort technique

- The data is sorted in place so there is little memory overhead and, once sorted, the data is in memory, ready for processing.
- It is simple to write, easy to understand and it only takes a few lines of code. 


Cases | Time Complexity | Space Complexity
------------ | ------------ | -------------
Best Case | O(n) | O(1)
Worst Case | O(n2) | O(1)


## 2. Selection Sort

Selection sort is an algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.

## Algorithm for Selection Sort:

```
selectionSort(array, size)
  repeat (size - 1) times
  set the first unsorted element as the minimum
  for each of the unsorted elements
    if element < currentMinimum
      set element as new minimum
  swap minimum with first unsorted position
end selectionSort
```

## Advantages of selection sort technique

- The selection sort is an in-place sorting algorithm so the space requirement is minimal.
- It is simple to write, easy to understand and it only takes a few lines of code. 


Cases | Time Complexity | Space Complexity
------------ | ------------ | -------------
Best Case | O(n2) | O(1)
Worst Case | O(n2) | O(1)


## 3. Insertion Sort

Insertion sort is the sorting mechanism where the sorted array is built having one item at a time. The array elements are compared with each other sequentially and then arranged simultaneously in some particular order.

## Algorithm for Insertion Sort:

```
insertionSort(array)
  mark first element as sorted
  for each unsorted element X
    'extract' the element X
    for j <- lastSortedIndex down to 0
      if current element j > X
        move sorted element to the right by 1
    break loop and insert X here
end insertionSort
```

## Advantages of insertion sort technique

- The data is sorted in place so there is little memory overhead and, once sorted, the data is in memory, ready for processing.
- It is simple to write, easy to understand and it only takes a few lines of code. 


Cases | Time Complexity | Space Complexity
------------ | ------------ | -------------
Best Case | O(n) | O(1)
Worst Case | O(n2) | O(1)


## 4. Merge Sort

Merge Sort is a kind of Divide and Conquer algorithm in computer programming. It is one of the most popular sorting algorithms and a great way to develop confidence in building recursive algorithms.

## Algorithm for Merge Sort:

```
MergeSort(A, p, r):
    if p > r 
        return
    q = (p+r)/2
    mergeSort(A, p, q)
    mergeSort(A, q+1, r)
    merge(A, p, q, r)
```

## Advantages of merge sort technique

- Worst case , best case, average case time complexity is : o(n log(n)) which makes it very efficient .
- It starts with smaller subfiles and finishes with largest ones . As a result it doesn’t need stack.

Cases | Time Complexity | Space Complexity
------------ | ------------ | -------------
Best Case | O(n*log n) | O(n)
Worst Case | O(n*log n) | O(n)


## 5. Quick sort

Quicksort is an algorithm based on divide and conquer approach in which the array is split into subarrays and these sub-arrays are recursively called to sort the elements.

## Algorithm for Quick Sort:

```
quickSort(array, leftmostIndex, rightmostIndex)
  if (leftmostIndex < rightmostIndex)
    pivotIndex <- partition(array,leftmostIndex, rightmostIndex)
    quickSort(array, leftmostIndex, pivotIndex)
    quickSort(array, pivotIndex + 1, rightmostIndex)

partition(array, leftmostIndex, rightmostIndex)
  set rightmostIndex as pivotIndex
  storeIndex <- leftmostIndex - 1
  for i <- leftmostIndex + 1 to rightmostIndex
  if element[i] < pivotElement
    swap element[i] and element[storeIndex]
    storeIndex++
  swap pivotElement and element[storeIndex+1]
return storeIndex + 1
```

## Advantages of quick sort technique

- Its cache performance is higher than other sorting algorithms. This is because of its in-place characteristic. 
- No extra memory. 


Cases | Time Complexity | Space Complexity
------------ | ------------ | -------------
Best Case | O(n*log n) | O(log n)
Worst Case | O(n2) | O(log n)


Contributed by - [Dhrubajyoti Chakraborty](https://www.github.com/dhrubajyoti89)
