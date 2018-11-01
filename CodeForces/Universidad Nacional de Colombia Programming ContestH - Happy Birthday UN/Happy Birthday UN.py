x=6
n=int(input())
s=["Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"]
for i in range(1868,1868+n):
    if  (i%4==0 and i%100!=0) or  (i%4==0 and i%100==0 and i%400==0):
        x+=366
    else:
        x+=365
if n!=0:
    print(s[(x%7)])
else:
    print(s[6])