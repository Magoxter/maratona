# equation: 
# a^n*x + b*sum(a^i)
# sum(a^i) = (a^n - 1)/(a-1)     geometric progression
# 
# modular division (a/b) mod m:
# (a/b) mod m => (a mod m) * (b^(-1) mod m) mod m
# b^(-1) => inverse multiplicative of b modulo m
def extendedEuclidean(a, b):
    if a == 0:
        return (b, 0, 1)
    else:
        g, y, x = extendedEuclidean(b % a, a)
        return (g, x - (b // a) * y, y)

def exp_mod (base, exp, mod):
    if (mod == 1):
        return 0;
    
    number = 1;
    
    while (exp):
        if (exp & 1):
            number = (number * base) % mod;
        exp >>= 1
        base = (base * base) % mod;
    
    return number

if __name__ == '__main__':
    a, b, n, x = map(int, raw_input().split())
    
    m = 1000000007
    s = 0
    
    an = exp_mod (a, n, m)
    if a == 1:
        s = (n+m)%m
    else:
        p = (an-1)%m
        q = extendedEuclidean(a-1, m)[1]
        q = (q+m)%m
        s = ((p%m)*(q%m))%m
        s = (s+m)%m
        # print s, a, an
    
    ss = ((an*x)+m)%m + ((b*s)+m)%m
    
    ss = (ss+m)%m
    
    print ss
