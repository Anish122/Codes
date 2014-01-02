import math
T=int(raw_input())
while T>0:
    N=int(raw_input())
    p=1
    sum=0
    while N/(5**p)!=0:
        sum+=int(N/(5**p))
        p+=1
    print sum
    T-=1
