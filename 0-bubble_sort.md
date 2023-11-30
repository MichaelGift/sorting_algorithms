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
