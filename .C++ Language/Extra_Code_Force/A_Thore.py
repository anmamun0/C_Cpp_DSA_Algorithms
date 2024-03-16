t = int(input())

for _ in range(t):
    n = int(input())
    path = input()
    dp = [0] * n
    dp[0] = int(path[0] == '@')
    
    for i in range(1, n):
        if path[i] == '.':
            dp[i] = max(dp[i-1], dp[i-2] if i >= 2 else 0)
        elif path[i] == '@':
            dp[i] = max(dp[i-1], dp[i-2] if i >= 2 else 0) + 1
        else:
            dp[i] = dp[i-1]
            
    print(dp[n-1])
