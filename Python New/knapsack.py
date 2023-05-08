def knapsack01(W, P, C, n):
    table = [[0 for _ in range(C+1)] for _ in range(n+1)]

    for i in range(1, n+1):
        for j in range(1, C+1):
            if W[i-1] > j:

                table[i][j] = table[i-1][j]
            else:

                table[i][j] = max(P[i-1] + table[i-1][j-W[i-1]], table[i-1][j])

    return table[n][C]

# Example usage:
W = [2, 11, 22, 15] 
P = [11, 21, 31, 33]
C = 40
n = 4
print(knapsack01(W, P, C, n)) 