# Bubble Sort Algorithm

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements(those next to each other), and swaps them if they are in the wrong order.

In each pass, the largest unsorted element "bubbles up" to its correct position at the end of the array.

The pass through the list is repeated until the list is sorted.

## Data Set

Let's consider the following unsorted array:

```plaintext
[5, 2, 9, 1, 5, 6]
```

## Step by step implementation

1. Pass 1:
- Compare elements at index 0 and 1: `[2, 5, 9, 1, 5, 6]`
    -  Resulting array: `[2, 5, 9, 1, 5, 6]`

- Compare elements at index 1 and 2: `[2, 5, 1, 9, 5, 6]`
    -  Resulting array: `[2, 1, 5, 9, 5, 6]`

- Compare elements at index 2 and 3: `[2, 5, 1, 5, 9, 6]`
   -  Resulting array: `[2, 1, 5, 5, 9, 6]`

- Compare elements at index 3 and 4: `[2, 5, 1, 5, 6, 9]`
  -  Resulting array: `[2, 1, 5, 5, 6, 9]`

2. Pass 2:
- Compare elements at index 0 and 1: `[2, 5, 1, 5, 6, 9]`
    - Resulting array: `[1, 5, 2, 5, 6, 9]`

- Compare elements at index 1 and 2: `[2, 1, 5, 5, 6, 9]`
    - Resulting array: `[1, 2, 5, 5, 6, 9]`

- Compare elements at index 2 and 3: `[2, 1, 5, 5, 6, 9]`
    - Resulting array: `[1, 2, 5, 5, 6, 9]`


3. Pass 3:
- Compare elements at index 0 and 1: `[1, 2, 5, 5, 6, 9]`
    - Resulting array: `[1, 2, 5, 5, 6, 9]`

- Compare elements at index 1 and 2: `[1, 2, 5, 5, 6, 9]`
    - Resulting array: `[1, 2, 5, 5, 6, 9]`

4. Pass 4:
- Compare elements at index 0 and 1: `[1, 2, 5, 5, 6, 9]`
    - Resulting array: `[1, 2, 5, 5, 6, 9]`

5. Pass 5:
- No more comparison
The array is now sorted: `[1, 2, 5, 5, 6, 9]`.


In each pass, the largest unsorted element finds its correct place at the end of the array. 

As a result, the subsequent passes can focus on the remaining unsorted portion of the array, reducing the number of elements that need to be considered. 

This is why the number of passes decreases as the algorithm progresses.

## Pseudocode

```plaintext
procedure bubbleSort(A: list of sortable items)
    n = length(A)
    
    for i from 0 to n - 1 do
        for j from 0 to n - i - 1 do
            // Compare adjacent elements
            if A[j] > A[j + 1] then
                // Swap if they are in the wrong order
                swap(A[j], A[j + 1])
            end if
        end for
    end for
end procedure
```
Explanation:

- `A`: The input list of sortable items.
- `n`: The number of elements in the list.
- The outer loop `(for i)` iterates over each element in the list.
- The inner loop `(for j)` compares adjacent elements and swaps them if they are in the wrong order.
- The condition `A[j] > A[j+1]` checks if the elements are in the wrong order, and if true, they are swapped.
