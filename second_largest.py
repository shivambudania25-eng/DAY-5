"""Print the second largest element from given n numbers."""

numbers = [12, 5, 45, 23, 67, 23, 67, 3]
unique_numbers = sorted(set(numbers), reverse=True)
print("Numbers:", numbers)
if len(unique_numbers) > 1:
    print("Second largest element:", unique_numbers[1])
else:
    print("Second largest element not available.")
