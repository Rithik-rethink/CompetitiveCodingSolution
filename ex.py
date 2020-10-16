a = "hello good morning"
arr = []
arr = a.split(' ')
dic = {}
for i in arr:
    if(i in dic.keys()):
        dic[i] += 1
    else:
        dic[i] = 1

dic = sorted(dic.items())
print(dic)
s = "foo'bar"
s1 = 'foo\'bar'
print(s , s1)