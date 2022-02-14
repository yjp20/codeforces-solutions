mod = 1000000007

def sqrat(n):
    x = n
    y = (x+1) // 2
    while y < x:
        x = y
        y = (x + n // x) // 2
    return x

def paw(e, exp):
    if exp == 0: return 1
    if exp == 1: return e
    ret = paw(e, exp//2);
    l = ret * ret % mod
    if exp%2 == 1:
        l *= e
        l %= mod
    return l

def main():
    inp = input().split()
    x = int(inp[0])
    n = int(inp[1])
    prime = set()

    cur = x;
    for i in range(2,sqrat(x)+5):
        while cur % i == 0:
            cur //= i
            prime.add(i)
    if cur > 1:
        prime.add(cur)

    p = 1
    for e in prime:
        f = e
        exp = 0
        while f <= n:
            exp += n //f
            f *= e
        p *= paw(e, exp)
        p %= mod

    print(p)

main()
