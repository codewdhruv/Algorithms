upper = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
state=int(input())
a,b=input().split()
n,k=map(int,input().split())
adiff=(upper.find(b)-upper.find(a))+1
ndiff=k-n+1
print((pow(adiff,2))*state*((pow(ndiff,4)-(4*n*(n-1)+n)
