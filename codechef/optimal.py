import itertools
from operator import ixor

def findsubsets(sopt, nopt):
    return list(itertools.combinations(sopt, n))

def xorOfArray(arr, nopt):
    xor_arr = 0
    for i in range(nopt):
        xor_arr = xor_arr ^ arr[i]
    return xor_arr
 
topt=int(input())
for z in range(topt):
    sopt=[]
    lm={}
    nopt,kopt=map(int,input().split())
    for i in range(1,nopt+1):
        sopt.append(i)
    lopt=findsubsets(sopt,kopt)
    for i in lopt:
        j=list(i)
        nopt=len(j)
        lm[xorOfArray(j, nopt)]=j
    lopt=list(lm.items())
    lopt.sort(reverse=True)
    for i in lopt[0][1]:
        print(i,end=" ")
    print()