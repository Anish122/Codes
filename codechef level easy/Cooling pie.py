pi=[]
rack=[]
T=int(raw_input())
while T>0:
    N=int(raw_input())
    str=raw_input()
    pi=str.split(' ')
    for i in xrange(0,len(pi)):
        pi[i]=int(pi[i])
    str=raw_input()
    rack=str.split(' ')
    for i in xrange(0,len(rack)):
        rack[i]=int(rack[i])
    pi=sorted(pi)
    rack=sorted(rack)
    count=0
    for i in xrange(0,len(pi)):
        for j in xrange(0,len(rack)):
            if pi[i]<=rack[j]:
                count+=1
                rack.remove(rack[j])
                break
    print count
    T-=1
