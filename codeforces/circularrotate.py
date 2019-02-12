def get_all_substrings(string):
   length = len(string)+1
   return [string[x:y] for x in range(length) for y in range(length) if string[x:y]]

li = get_all_substrings('101103')
flag = 0
x = 0
z = [int(x) for x in sorted(list(set(li)))]
z = list(set(z))
print(z)
for i in z:
    for j in z:
        if(int(i)-int(j)==-1):
            print(int(i),int(j))
    if(flag == 0):
        x=1

if(x==1):
    print("NO")
else:
    print('yes')
