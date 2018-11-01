n,k=map(int,input().split())
for case in range(k):
    s=[0 for i in range(n)]
    nu,c=map(int,input().split())
    x=0
    nu=bin(nu)
    for i in range(n-1,-1,-1):
        if nu[len(nu)-1-x]=="0":
            s[i]=0
        elif nu[len(nu)-1-x]=="1":
            s[i]=1
        else:
            break
        x+=1
    mov=c%n
    ans=[0 for i in range(n)]
 
    for  i in range(n):
        if(i-mov<0):
            ans[n+(i-mov)]=s[i];
        else:
            ans[i-mov]=s[i];
    rt=0
    for i in range(n-1,-1,-1):
        if ans[i]==1:
            rt+=2**(n-1-i)
    print(rt)
            