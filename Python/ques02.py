def fun(n, a):
    # Read only region end
# Write code here
    mf = n
    pp = a
    if mf < 3:
        return [0] * mf

    res = [0] * mf

    for idx in range(mf):
        md = float('inf')
        for lc in range(max(0, mf-2-(mf-idx-1)), min(mf-2, idx)+1):
            rc = mf-2-lc
            d1 = sum(abs(pp[idx]-pp[idx-k-1]) for k in range(lc))
            dr = sum(abs(pp[idx]-pp[idx+k+1]) for k in range(rc))
            td = d1 + dr
            if td < md:
                md = td
        res[idx] = md

    return res

n = int(input())
a = list(map(int,input().split()))
print(fun(n,a))