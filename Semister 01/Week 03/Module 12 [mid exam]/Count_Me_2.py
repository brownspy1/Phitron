s = input()
con =0
for i in range(len(s)):
    if s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u':
        con+=1
print(con)