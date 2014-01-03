from itertools import combinations

def func(set,A):
    data=[]
    for r in xrange(1,len(set)+1):
        for a in combinations(set,r):
            for i in xrange(0,len(a)):
                data.append(int(a[i]))
            if sum(data)==A:
                print "Yes"
                return
            data=[]
    print "No"

T=int(raw_input())
while T>0:
    set=[]
    N,A=raw_input().split()
    N=int(N)
    A=int(A)
    for i in xrange(0,N):
        val=int(raw_input())
        if val<=A:
            set.append(val)
        set=sorted(set)
    func(set,A)
    T-=1
