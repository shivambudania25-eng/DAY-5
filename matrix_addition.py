"""Compute addition of two matrices."""

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

if len(matrix_a) != len(matrix_b) or any(len(row_a) != len(row_b) for row_a, row_b in zip(matrix_a, matrix_b)):
    raise ValueError("Matrices must have the same dimensions")

result = [[row_a[j] + row_b[j] for j in range(len(row_a))] for row_a, row_b in zip(matrix_a, matrix_b)]

print("Matrix A:")
for row in matrix_a:
    print(row)
print("\nMatrix B:")
for row in matrix_b:
    print(row)
print("\nMatrix A + Matrix B:")
for row in result:
    print(row)
