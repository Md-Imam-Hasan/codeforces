t=int(input())

while t>0:
    a, b, p = map(int, input().split())
    s = input()
    sum = 0
    i = len(s) - 2
    flagA = 0
    flagB = 0

    while i >= 0 and sum <= p:
        if s[i] == 'A' and flagA == 0:
            flagA = 1
            flagB = 0
            if sum + a <= p:
                sum += a
            else:
                break
        elif s[i] == 'A' and flagA == 1:
            i -= 1
            continue
        elif s[i] == 'B' and flagB == 0:
            flagB = 1
            flagA = 0
            if sum + b <= p:
                sum += b
            else:
                break
        elif s[i] == 'B' and flagB == 1:
            i -= 1
            continue

        i -= 1

    print(i + 2)
    t-=1