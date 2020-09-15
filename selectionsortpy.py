import random
a=[1,56,43,78,387,589]
random.shuffle(a)
for i in range(0,len(a)-1,1):
    mini=i
    for j in range(i+1,len(a),1):
        if a[j]<a[mini]:
            mini=j
    a[mini],a[i]=a[i],a[mini]
print(a)
