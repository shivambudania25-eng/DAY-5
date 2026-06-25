"""Array practice problems for Day 5.
1. Print maximum element from given n numbers
2. Print minimum element from given n numbers
3. Calculate sum of all array elements
4. Print all array items in reverse order
5. Print second largest element from given n numbers
6. Compute addition of two matrices
"""

from typing import List, Optional


def max_element(arr: List[int]) -> Optional[int]:
    return max(arr) if arr else None


def min_element(arr: List[int]) -> Optional[int]:
    return min(arr) if arr else None


def sum_elements(arr: List[int]) -> int:
    return sum(arr)


def reverse_elements(arr: List[int]) -> List[int]:
    return arr[::-1]


def second_largest(arr: List[int]) -> Optional[int]:
    unique_values = sorted(set(arr), reverse=True)
    return unique_values[1] if len(unique_values) > 1 else None


def add_matrices(a: List[List[int]], b: List[List[int]]) -> List[List[int]]:
    if not a or not b:
        raise ValueError("Both matrices must be non-empty")
    if len(a) != len(b) or any(len(row_a) != len(row_b) for row_a, row_b in zip(a, b)):
        raise ValueError("Matrices must have the same dimensions")
    return [[row_a[j] + row_b[j] for j in range(len(row_a))] for row_a, row_b in zip(a, b)]


def format_matrix(matrix: List[List[int]]) -> str:
    return "\n".join("\t".join(str(value) for value in row) for row in matrix)


def main() -> None:
    numbers = [12, 5, 45, 23, 67, 23, 67, 3]
    matrix_a = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9],
    ]
    matrix_b = [
        [9, 8, 7],
        [6, 5, 4],
        [3, 2, 1],
    ]

    print("Array practice problems - Day 5")
    print("Numbers:", numbers)
    print("Maximum element:", max_element(numbers))
    print("Minimum element:", min_element(numbers))
    print("Sum of array elements:", sum_elements(numbers))
    print("Array in reverse order:", reverse_elements(numbers))
    print("Second largest element:", second_largest(numbers))
    print()

    print("Matrix A:")
    print(format_matrix(matrix_a))
    print("\nMatrix B:")
    print(format_matrix(matrix_b))
    print("\nMatrix A + Matrix B:")
    print(format_matrix(add_matrices(matrix_a, matrix_b)))


if __name__ == "__main__":
    main()
