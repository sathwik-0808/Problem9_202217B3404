def selection_sort(arr):
    # Traverse through all elements in the array
    for i in range(len(arr)):
        # Assume the minimum element is the first element
        min_index = i
        # Traverse the unsorted portion of the array
        for j in range(i+1, len(arr)):
            # Find the index of the smallest element in the unsorted portion
            if arr[j] < arr[min_index]:
                min_index = j
        # Swap the found minimum element with the first element of the unsorted portion
        arr[i], arr[min_index] = arr[min_index], arr[i]
 
# Example usage
array = [64, 25, 12, 22, 11]
selection_sort(array)
print("Sorted array:", array)