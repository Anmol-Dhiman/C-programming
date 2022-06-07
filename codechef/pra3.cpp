import itertools
from operator import ixor

def findsubsets(sopt, nopt):
    return list(itertools.combinations(sopt, nopt))

def xorOfArray(arropt, nopt):
    xor_arr = 0
    for i in range(n):
        xor_arr = xor_arr ^ arropt[i]
    return xor_arr
 
topt=int(input())
for zopt in range(topt):
    sopt=[]
    lmopt={}
    nopt,kopt=map(int,input().split())
    for i in range(1,nopt+1):
        sopt.append(i)
    lopt=findsubsets(sopt,kopt)
    for i in lopt:
        j=list(i)
        nopt=len(j)
        lmopt[xorOfArray(j, nopt)]=j
    lopt=list(lmopt.items())
    lopt.sort(reverse=True)
    for i in lopt[0][1]:
        print(i,end=" ")
    print()