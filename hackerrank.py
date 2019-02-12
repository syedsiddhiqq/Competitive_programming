t = 'hackerrank'
n = input()
for _ in range(n):
    s = raw_input()
    cnt = 0
    ctr = 0

    for i in t:
        for ch in s:
            if(ch == i):
                cnt = cnt+1;
                break

    if(cnt == 10):
        print "YES"
    else:
        print "NO"
