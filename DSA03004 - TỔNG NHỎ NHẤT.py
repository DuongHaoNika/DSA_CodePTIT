if __name__ == '__main__':
    t = int(input())
    while(t > 0):
        t-=1
        n = int(input())
        a = list(map(int, input().split()))
        a = sorted(a);
        res1 = 0
        res2 = 0
        idx = 0
        while (idx < n):
            if (idx % 2 == 0):
                res1 = res1 * 10 + a[idx]
            else:
                res2 = res2 * 10 + a[idx]
            idx += 1
        print(res1 + res2)