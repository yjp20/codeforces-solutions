n = int(input())
A = [0] * 1000001

for i in range(1,1000000+1):
    t = i
    sig = 0
    while t:
        sig = max(sig, t%10)
        t //= 10
    A[i] = A[i-sig] + 1

print(n)
