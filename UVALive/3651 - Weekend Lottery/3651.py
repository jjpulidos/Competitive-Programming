def bet(N,C,K,d):
    dictt={}
    for i in range(K):
        dictt[i+1]=0
    for number in d:
        dictt[number]+=1
    j=0
    flag=True
    endi=[]
    while flag:
        for element in dictt:
            if dictt[element]==j:
                endi.append(element)
        if len(endi)!=0:
            flag=False
        j+=1
    endi.sort()
    return(endi)

import sys

if __name__ == '__main__':

    while True :
        line = sys.stdin.readline().strip()
        N,C,K=map(int, line.split())
        if N == 0 and C == 0 and K == 0: break

        ls = []
        for _ in range(N):

            line = sys.stdin.readline().strip()
            out= map(int, line.split())
            ls+=out
        print(' '.join(map(str,bet(N,C,K,ls))))