if __name__ == '__main__':
    t = int(input())
    while(t > 0):
        t-=1
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        if(k < n/2):
            a.sort()
        else:
            a.sort(reverse=True)
        sum1 = 0
        sum2 = 0
        for i in range(k):
            sum1 += a[i]
        for i in range(k, n, 1):
            sum2 += a[i]
        if(k >= n/2):
            print(sum1 - sum2)
        else:
            print(sum2 - sum1)