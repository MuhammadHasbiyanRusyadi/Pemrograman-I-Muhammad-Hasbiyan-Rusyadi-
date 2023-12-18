def perkalianmats(A, B):
    n = len(A)
    result = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                result[i][j] += A[i][k] * B[k][j]
    return result
def print_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))
n = int(input("Masukkan ordo matriks: "))
print("Masukkan elemen Matriks A:")
A = [list(map(int, input().split())) for _ in range(n)]
print("Masukkan elemen Matriks B:")
B = [list(map(int, input().split())) for _ in range(n)]
result_matrix = perkalianmats(A, B)
print("Matriks AXB:")
print_matrix(result_matrix)
print()