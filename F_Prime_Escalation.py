import sys
import threading
def main():
    import sys
    sys.setrecursionlimit(1 << 25)
    n = int(sys.stdin.readline())
    arr = [0] + list(map(int, sys.stdin.readline().split()))
    MAX_VAL = 10**6 + 1
    spf = [i for i in range(MAX_VAL)]
    for i in range(2, int(MAX_VAL**0.5)+1):
        if spf[i] == i:
            for j in range(i*i, MAX_VAL, i):
                if spf[j] == j:
                    spf[j] = i
    def prime_factors(x):
        factors = set()
        while x > 1:
            p = spf[x]
            factors.add(p)
            while x % p == 0:
                x //= p
        return factors
    state = [0]*(n+1)
    prime_state = {}
    for idx in range(n, 0, -1):
        primes = prime_factors(arr[idx])
        state[idx] = 0
        for p in primes:
            if p in prime_state and prime_state[p] == 0:
                state[idx] = 1
                break
        for p in primes:
            prime_state[p] = state[idx]
    print("Eleven" if state[1] else "Vecna")
threading.Thread(target=main).start()