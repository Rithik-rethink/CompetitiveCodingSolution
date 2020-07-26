n = int(input())
arr = list(map(int,input().strip().split(' ')))
arr1 = list(map(int,input().strip().split(' ')))
a = sum(arr)
arr1 = sorted(arr1)
if arr1[n-1] + arr1[n-2] >= sum:
    print('YES')
else:
    print('NO')