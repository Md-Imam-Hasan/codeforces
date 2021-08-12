n=int(input())
s=input()
flag=0
open=0
close=0

for i in range(len(s)):
    if s[i]=='(':
        open+=1
    else:
        close+=1
sum=0
if open==close:
    open=0
    close=0
    for i in range(len(s)):
        if s[i]==')':
            if flag==0 and open==0:
                j=i
                flag=1
            if flag==1:
                close+=1
            else:
                open-=1
        elif s[i]=='(':
            if flag==1:
                close-=1
                if close==0:
                    sum+=i-j+1
                    flag=0
            else:
                open+=1
    print(sum)

else:
    print("-1")
