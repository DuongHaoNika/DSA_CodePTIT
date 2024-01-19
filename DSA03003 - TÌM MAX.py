if __name__ == '__main__':
    t = int(input())
    while(t > 0):
        t-=1
        n = int(input())
        a = list(map(int, input().split()))
        a.sort()
        mod = int(1e9 + 7)
        res = 0
        for i in range(n):
            res += i * a[i]
            res %= mod
        print(res)