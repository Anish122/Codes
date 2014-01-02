p1=[]
p2=[]
R=int(raw_input())
while R>0:
    a,b= raw_input().split()
    a=int(a)
    b=int(b)
    if len(p1)==0 and len(p2)==0:
        p1.append(a)
        p2.append(b)
        if a>b:
            lead=a-b
            flag=0
        else:
            lead=b-a
            flag=1
    else:
        x=len(p1)-1
        y=len(p2)-1
        p1.append(p1[x]+a)
        p2.append(p2[y]+b)
        if p1[len(p1)-1]- p2[len(p2)-1]>lead:
            lead = p1[len(p1)-1]- p2[len(p2)-1]
            flag=0
        elif -1*(p1[len(p1)-1]- p2[len(p2)-1])>lead:
            lead = -1*(p1[len(p1)-1]- p2[len(p2)-1])
            flag=1
    R-=1
if lead>0 and flag==0:
        print "%d %d" %(1,lead)
else:
        print "%d %d" %(2,lead)
