chamber=[]
A,N,K=raw_input().split()
A=int(A)
N=int(N)
K=int(K)
t=0
for i in xrange(0,K):
    chamber.append(0)
while A>0:
    chamber[t]=A%(N+1)
    t+=1
    if A<=N:
        break
    A=int(A/(N+1))
print " ".join(str(num) for num in chamber)
