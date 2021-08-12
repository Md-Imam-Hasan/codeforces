n,k=map(int,input().split())
plist=list(map(int,input().split()))
ans=[]
sum=0

for i in range(n):
    if plist[i]>=n-k+1:
        sum+=plist[i]
        pos=i
        ans.append(pos)

cnt=1

for j in range(len(ans)-1):
    cnt*=(ans[j+1]-ans[j])%998244353

print(sum,cnt%998244353)