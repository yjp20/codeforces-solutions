# ct
# a
# ah
# aha
# h
# ha
# hah

def count(s):
    ct = 0
    for i in range(len(s)-3):
        if s[i:i+4] == "haha":
            ct += 1
    return ct

class lel:
    def __init__(self, s, ct):
        self.ct = ct
        self.st = s[:3]
        self.ed = s[-3:]

    def __add__(self, o):
        return lel(self.st + o.st + "x" + self.ed + o.ed, self.ct + o.ct + count(self.ed + o.st))

T = int(input())
for t in range(T):
    N = int(input())
    dp = dict()
    last = ""
    for i in range(N):
        tokens = input().split()
        if len(tokens) == 3:
            dp[tokens[0]] = lel(tokens[2], count(tokens[2]))
        elif len(tokens) == 5:
            dp[tokens[0]] = dp[tokens[2]] + dp[tokens[4]]
        last = tokens[0]

    print(dp[last].ct)

