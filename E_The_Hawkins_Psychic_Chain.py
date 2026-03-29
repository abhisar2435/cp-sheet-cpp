def solve():
    import sys
    sys.setrecursionlimit(10**7)
    
    n = int(sys.stdin.readline().strip())
    arr = list(map(int, sys.stdin.readline().split()))
    
    max_sum = 200000
    prime = [True] * (max_sum + 1)
    prime[0] = prime[1] = False
    for i in range(2, int(max_sum ** 0.5) + 1):
        if prime[i]:
            for multiple in range(i * i, max_sum + 1, i):
                prime[multiple] = False
    
    adj = [[False] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            if i != j and prime[arr[i] + arr[j]]:
                adj[i][j] = True
    
    size = 1 << n
    dp = [[0] * n for _ in range(size)]
    
    for i in range(n):
        if arr[i] % 2 == 0:
            dp[1 << i][i] = 1
    
    for mask in range(size):
        for last in range(n):
            if dp[mask][last] == 0:
                continue
            
            for nxt in range(n):
                if (mask & (1 << nxt)) == 0 and adj[last][nxt]:
                    dp[mask | (1 << nxt)][nxt] += dp[mask][last]
    
    full = size - 1
    result = sum(dp[full][i] for i in range(n))
    
    print(result)


if __name__ == "__main__":
    solve()