users=['ram','hari','shyam']
emptylist=[]

users.append('swarup')
print(users)

users+=['lamsal']
print(users)

users.extend(['shiva','pujan'])
print(users)

users.insert(0,'swarup')
print(users)

users[2:2]=['Martha','Alex']
print(users)

users[1:3]=['Robert','Dave']
print(users)

users.remove('swarup')
print(users)

print(users.pop())
print(users)

del users[-6]
print(users)

users.sort()
print(users)

users.sort(key=str.lower)
print(users)

nums=[4,42,3,55,23]
nums.reverse()
print(nums)

nums.sort(reverse=True)
print(nums)

print(sorted(nums))
print(nums)

numscopy=nums.copy()
mynums=list(nums)
copy=nums[:]

print(type(mynums))

mylist = list([1,'swarup',True])
print(mylist)